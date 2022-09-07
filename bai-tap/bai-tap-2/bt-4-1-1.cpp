#include <iostream>
using namespace std;

float horner_method(int n, float coefficients[], float x) {
    int i;
    if (n == 0) {
        return coefficients[0];
    } else {
        float result = coefficients[n];
        for (i = n; i > 0; i--) {
            result = (result * x + coefficients[i-1]);
        }
        return result;
    }
}

int main() {
    float result;

    int n;
    printf("%s: \n", "Nhap bac da thuc (n la so tu nhien)");
    scanf("%d", &n);
    // printf("%d", n);

    float coefficients[n + 1];

    int i;
    for (i = 0; i <= n; i++) {
        printf("%s%d: \n", "Nhap he so bac ", i);
        scanf("%f", &coefficients[i]);
        // printf("%5.2f\n", coefficients[i]);
    }

    float x;
    printf("%s: \n", "Nhap x");
    scanf("%f", &x);

    result = horner_method(n, coefficients, x);
    printf("P(x) = %5.2f\n", result);

    return 0;
}