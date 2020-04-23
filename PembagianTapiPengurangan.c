#include <stdio.h>

int main()
{
    int firstNumber, secondNumber;

    printf("Pembagian tapi pake proses pengurangan\n");
    printf("Kayak Matematika SD\n\n");

    do
    {
        printf("Masukkan Bilangan bulat pertama: ");
        scanf("%d", &firstNumber);
        
        printf("Masukkan Bilangan bulat kedua: ");
        scanf("%d", &secondNumber);
    } while (firstNumber % secondNumber != 0);

    int remainder = firstNumber;
    int subtractionCount = 0;

    while (remainder > 0)
    {
        printf("%d - %d = %d \n", remainder, secondNumber, (remainder - secondNumber));
        remainder -= secondNumber;
        subtractionCount++;
    }

    printf("\n\n%d / %d = %d\n", firstNumber, secondNumber, subtractionCount);
    return 0;
}


