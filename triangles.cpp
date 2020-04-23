#include<stdio.h>

int main()
{
    int stacks, i, j;

    printf("How many stacks do you want in your triangle? ");
    scanf("%d", &stacks);

    for (i = 0; i < stacks; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("i loop stops at %d\n", i);
    printf("j loop stops at %d\n", j);

    return 0;
}