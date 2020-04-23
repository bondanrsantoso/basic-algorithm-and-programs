#include <stdio.h>

int main(){
    int x, y, hasil;

    printf("Masukkan nilai bilangan pertama: ");
    scanf("%i", &x);

    printf("Masukkan nilai bilangan kedua: ");
    scanf("%i", &y);

    hasil = x + y;

    printf("Hasil Penjumlahan dua Bilangan adalah: %i \n", hasil);

    return 0;
}