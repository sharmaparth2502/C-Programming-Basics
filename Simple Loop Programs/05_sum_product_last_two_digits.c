//5) Write a program, which finds the sum of the product of last two digits
#include <stdio.h>
int main(){


    int n, sum=0, i;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){

        int num;
        printf("Tell your number:");
        scanf("%d", &num);

        sum += (num % 10) * ((num / 10) % 10);
    }

    printf("Sum = %d", sum);
    return 0;
}