//9) Write a program, which finds the sum of odd numbers.
#include <stdio.h>
int main(){

    int n, sum=0, i;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        int num;
        printf("Tell your number:");
        scanf("%d", &num);

        if(num % 2 != 0){
            sum += num;
        }
    }
    printf("The sum of the odd numbers is: %d\n", sum);

    return 0;
}