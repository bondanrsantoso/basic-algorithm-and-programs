#include <stdio.h>

int main()
{
    int count, odds = 0, evens = 0, i, number;

    printf("How many number do you want to enter: ");
    scanf("%d", &count);

    for (i = 1; i <= count; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if(number % 2 == 0)
            evens++; 
        else
            odds++;
    }

    printf("There are %d odd numbers\n", odds);
    printf("There are %d even numbers\n", evens);
}