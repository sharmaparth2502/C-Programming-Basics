//8) Write a program, which finds the weighted sum of these numbers. The weight of ith number is i.
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

        sum = sum + num * i;
    }

    printf("Weighted sum = %d", sum);

    return 0;
}