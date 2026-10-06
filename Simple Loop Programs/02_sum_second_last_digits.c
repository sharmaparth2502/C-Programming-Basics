//2)Write a program, which finds the sum of second last digits.
#include <stdio.h>

int main()
{
    int n, num, sum = 0, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        sum = sum + (num / 10) % 10;
    }

    printf("Sum of second last digits = %d", sum);

    return 0;
}