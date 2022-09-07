#include <cstdio>

int main() { 
    int a = 0x123456;
    int &b = a;
    int *p = &a;
    char *q = (char*)p;
    // *(q + 2) = 0x55;
    printf("1: %x\n", b);//1
    printf("2: %x\n", &b);//2
    printf("3: %x\n", p);//3
    printf("4: %x\n", *p);//4
    printf("5: %x\n", &p);//5
    printf("6: %x\n", q);//6
    printf("7: %x\n", q + 2);//7
    printf("8: %x\n", *(q + 2));//8
    return 0;
}
