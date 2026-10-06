//10) Write a program, which finds how many of these numbers are odd.
#include <stdio.h>
int main(){

    int n, count=0, i;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        int num;
        printf("Tell your number:");
        scanf("%d", &num);

        if(num % 2 != 0){
            count++;
        }
    }
    printf("The count of the odd numbers is: %d\n", count);

    return 0;   
}