#include <stdio.h>
#include <math.h>

int func(int v, double t) {
    // printf("0x%16x\n", v);
    // printf("%d\n", v);
    return v + 0.5 + t;
}

double find_sqrt(double y) {
    double x = y / 2;
    int n = 5; // number of loop 
    for (int i = 0; i < n; i++) {
        x = x / 2 + y / (2 * x);
    }
    return x;
}

void find_prime_factors(int n) {
    printf("Phan tich thua so nguyen to: ");
    // 2
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    // odd prime factor
    for (int i = 3; i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    printf("\n");
}

int main() {
    // Cau 1
    // int a = 100;
    // unsigned int b = 100;
    // printf("%d\n", a < -1);
    // printf("%d\n", b < -1);
    // printf("0x%08x\n", a);
    // printf("0x%08x\n", b);
    // printf("0x%08x\n", -1);

    // Cau 2
    printf("|-------------|\n");
    printf("|  Xin chào   |\n");
    printf("|-------------|\n");
    printf("\n");

    // Câu 3
    // double a = 2.5;
    // double v = func(2.5, a);
    // printf("0x%16x\n", a);
    // printf("%lf", v);

    // Cau 4
    double y = 2;
    double sq = find_sqrt(y);
    printf("y = %lf, can bac 2 cua y = %lf\n", y, sq);

    // Cau 5
    int n = 12;
    find_prime_factors(n);
    return 0;
}

