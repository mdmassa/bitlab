#include <stdio.h>

int main() {
    int a = 5, b = 10;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    *p1 = 10;
    *p2 = 5;

    printf("Valor em A %d e B %d\n", a, b);
    printf("Valor endereço A %p e B %p\n", &a, &b);
    printf("Valor em A %d e B %d\n", *p1, *p2);
    printf("Valor endereço A %p e B %p\n", p1, p2);

    return 0;
}