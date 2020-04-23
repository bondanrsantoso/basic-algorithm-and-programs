#include <stdio.h>

int main()
{
    int gajiPokok, tunjangan = 0, gajiTotal, anak = 0, golongan;
    char isNikah;
    char nama[60];

    printf("PERGAJIAN DUNIAWI\n");
    printf("=======================\n");
    printf("Nama: ");
    fgets(nama, 60, stdin);
    // printf("%s", nama);
    printf("Golongan (1-3): ");
    scanf("%d", &golongan);
    // printf("%d", golongan);
    printf("Status Nikah (y/n): ");
    scanf(" %c", &isNikah);
    // printf("%", isNikah);

    switch (golongan)
    {
        case 1:
            gajiPokok = 2000000;
            break;
        case 2:
            gajiPokok = 3000000;
            break;
        case 3:
            gajiPokok = 4000000;
            break;
        default:
            printf("Golongan invalid\n");
            return 1;
            break;
    }

    if(isNikah == 'Y' || isNikah == 'y'){
        printf("Jumlah Anak: ");
        scanf("%d", &anak);
        if(anak > 2){
            tunjangan = 2 * (gajiPokok / 10);
        } else {
            tunjangan = anak * (gajiPokok / 10);
        }
    }

    gajiTotal = gajiPokok + tunjangan;

    printf("=======================\n");
    printf("Nama\t\t: %s", nama);
    printf("Golongan\t: %d\n", golongan);
    printf("Gaji\t\t: Rp%d\n", gajiTotal);

    return 0;
}