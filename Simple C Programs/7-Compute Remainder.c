/*
7: Compute Remainder
 Take two integers as input and display their remainder using %.
*/
#include <stdio.h>
int main(){

    int a,b;
    printf("please enter first integer: ");
    scanf("%d",&a);
    printf("please enter second integer: ");
    scanf("%d",&b);

    printf("Remainder when %d divided by %d is: %d\n",a,b,a%b);
    return 0;
}