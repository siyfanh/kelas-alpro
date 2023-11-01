#include<stdio.h>

// Fungsi yang akan diintegrasikan
double f(double x) {
    return 2*x + 3;
}

// Metode trapesium
double trapezoidal(double a, double b, int n) {
    double h = (b-a)/n;
    double s = f(a) + f(b);

    for (int i = 1; i < n; i++)
        s += 2 * f(a + i*h);

    return (h / 2) * s;
}

int main() {
    double a = -1, b = 4; // batas integrasi
    int n; // jumlah blok

    printf("Masukkan jumlah blok (N): ");
    scanf("%d", &n);

    printf("Hasil integral: %.6lf\n", trapezoidal(a, b, n));

    return 0;
}
