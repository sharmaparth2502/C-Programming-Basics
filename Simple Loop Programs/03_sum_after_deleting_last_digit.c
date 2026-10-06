//3) Write a program to find the sum of numbers after deleting last digit.
#include <stdio.h>
int main(){
    int num, n, sum=0, i;
    printf("Enter number of numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("Enter number: ");
        scanf("%d",&num);
        
        sum=sum+(int)num/10;
    }
    printf("Sum after deleting last digit of the numbers is: %d\n",sum);


    return 0;
}