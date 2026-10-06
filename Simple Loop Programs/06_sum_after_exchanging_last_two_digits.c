//6) Write a program, which finds the sum of numbers after exchanging last two digits.
#include <stdio.h>

int main()
{
    int n, num, last, second_last, new_num;
    int sum = 0, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        last = num % 10;
        second_last = (num / 10) % 10;

    new_num = (num / 100) * 100 + last * 10 + second_last;

        sum = sum + new_num;
    }

    printf("Sum = %d", sum);

    return 0;
}