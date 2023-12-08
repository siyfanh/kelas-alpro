#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

double fungsiAcak(); /* Fungsi untuk mengembalikan angka acak */

void main()
{
    int I, hitungKeluar, num;
    float luas, total, hitung;
    FILE *fptr;
    time_t t;
    /* Array lokal */
    double x, y, xKeluar[3500], yKeluar[3500], xPusatMassa, yPusatMassa;
    fptr = fopen("cofmc.dat", "w");
    /* Menginisialisasi generator angka acak */
    srand((unsigned)time(&t));
    /* Mengosongkan array */
    for (I = 0; I < 3500; I++)
    {
        xKeluar[I] = 0.0;
        yKeluar[I] = 0.0;
    }
    /* Mengatur akumulator x dan y pusat massa menjadi nol */
    xPusatMassa = 0.0;
    yPusatMassa = 0.0;

    total = 0.0;
    hitung = 0.0;
    hitungKeluar = 0;
    
    printf("Masukkan jumlah iterasi yang diinginkan: ");
    scanf("%d", &num);
    
    for (I = 1; I <= num; I++)
    {
        /* Memanggil fungsi angka acak */
        /* Mendapatkan nilai x antara -2 dan +2 */
        /* Mendapatkan nilai y antara -2 dan +2 */
        x = fungsiAcak() * 4.0 - 2.0;
        y = fungsiAcak() * 4.0 - 2.0;
        /* Jika nilai x dan y yang dihasilkan menunjukkan y lebih besar dari */
        /* - √(4-x^2 ) dan kurang dari + √(4-x^2), maka tambahkan 1 ke hitung */
        /* dan perbarui nilai x dan y pusat massa */
        if (y > -sqrt(4 - pow(x, 2)) && y < sqrt(4 - pow(x, 2)))
        {
            xPusatMassa = xPusatMassa + x;
            yPusatMassa = yPusatMassa + y;
            total = total + 1;
            hitungKeluar = hitungKeluar + 1;
            xKeluar[hitungKeluar] = x;
            yKeluar[hitungKeluar] = y;
        }
        hitung = hitung + 1;
    }
    luas = (total / hitung) * 16; /* Luas adalah bagian dari persegi yang berukuran 4x4 atau
         16 unit persegi */
    printf("total is %f count is %f\n", total, hitung);
    xPusatMassa = xPusatMassa / total;
    yPusatMassa = yPusatMassa / total;
    printf("luas is %lf\n", luas);
    printf("pusat massa is %lf,%lf", xPusatMassa, yPusatMassa);

    /* Membuat plot data */
    if (hitungKeluar >= 2700)
        hitungKeluar = 2700;
    for (I = 1; I <= hitungKeluar - 1; I++)
        fprintf(fptr, "%lf %lf\n", xKeluar[I], yKeluar[I]);
    fclose(fptr);
}
double fungsiAcak()
{
    /* Mendapatkan angka acak 0 hingga 1 */
    double ans;
    ans = rand() % 1000;
    ans = ans / 1000;
    return ans;
}
