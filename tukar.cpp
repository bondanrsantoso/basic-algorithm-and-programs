#include <stdio.h>

int main()
{
    int a, b;
    printf("Program Penukaran 2 Buah Nilai\n");
    printf("==============================\n");
    printf("NILAI AWAL\n");
    printf("==============================\n");
    printf("Bilangan Pertama: ");
    scanf("%d", &a);
    printf("Bilangan Kedua: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("==============================\n");
    printf("SETELAH PENUKARAN\n");
    printf("==============================\n");
    printf("Bilangan Pertama: %d\n", a);
    printf("Bilangan Kedua: %d\n", b);

    return 0;
}