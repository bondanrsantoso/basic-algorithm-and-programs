#include <stdio.h>

int main()
{
    int change = 88000;
    printf("Enter an amount of change: "); scanf("%d", &change);
    printf("%d\n", change);

    const int max = 100000;
    const int denominations[] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
    for (int i = 0; i < 10 && change > 0; i++)
    {
        if(change >= denominations[i])
        {
            // i++;
            printf("%d lembar Rp%d\n", change / denominations[i], denominations[i]);
            change %= denominations[i];
        }
    }

    return 0;
}