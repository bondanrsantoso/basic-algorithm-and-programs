#include <stdio.h>
#define pi 3.14

int main()
{
    float jari, luas, keliling;
    printf("Masukkan Jari-jari lingkaran: ");
    scanf("%f", &jari);

    luas = pi * jari * jari;
    keliling = 2 * pi * jari;

    printf("Luas lingkaran = %f\n", luas);
    printf("Keliling lingkaran = %f\n", keliling);

    return 0;
}