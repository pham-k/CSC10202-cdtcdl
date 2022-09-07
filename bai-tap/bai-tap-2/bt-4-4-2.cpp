#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int lim = 99999999;

    do {
        printf("Nhap so nguyen a (0 < a < %d):\n", lim);
        scanf("%d", &a);
    }
    while (a > lim || a < 0);

    do {
        printf("Nhap so nguyen a (0 < a < %d):\n", lim);
        scanf("%d", &b);
    }
    while (b > lim || b < 0);

    // phep cong
    c = a + b;
    printf("%*d\n", 9, a);
    printf("+%*d\n", 8, b);
    printf("---------%s\n", "");
    printf("%*d\n", 9, c);
    return 0;
}