#include <stdio.h>

int main() {
    float berat, tinggi, bmi;
    int pilihan;

    printf("1.Laki-Laki\n2.Perempuan\n");
    printf("Pilih Jenis Kelamin: ");
    scanf("%d", &pilihan);
    switch (pilihan)
    {
    case 1:
        printf("Masukkan berat (kg): ");
        scanf("%f", &berat);
        printf("Masukkan tinggi (cm): ");
        scanf("%f", &tinggi);
        tinggi = tinggi / 100;
        bmi = berat / (tinggi * tinggi);
        printf("BMI = %.2f\n", bmi);
        if(bmi >= 17 && bmi < 23){
            printf("Badan Anda Ideal\n");
        }else{
            printf("Badan Anda Tidak Ideal");
        }
        break;
    case 2:
        printf("Masukkan berat (kg): ");
        scanf("%f", &berat);
        printf("Masukkan tinggi (cm): ");
        scanf("%f", &tinggi);
        tinggi = tinggi / 100;
        bmi = berat / (tinggi * tinggi);
        printf("BMI = %.2f\n", bmi);
        if(bmi >= 18 && bmi <= 25){
            printf("Badan Anda Ideal\n");
        }else{
            printf("Badan Anda Tidak Ideal");
        }
    default:
        printf("Pilihan Tidak Ada");
            break;
    }
    return 0;
}
