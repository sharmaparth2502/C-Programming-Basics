//4) Write a program to find the sum of numbers after deleting second last digit.
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

        sum = sum + (num / 100) * 10 + num % 10;
    }

    printf("Sum = %d", sum);

    return 0;
}