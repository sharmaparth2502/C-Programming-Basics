/*
8: Average of Three Numbers
 Input three integers and compute their average.
*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Please enter first number:");
    scanf("%d",&a);
    printf("Please enter second number:");
    scanf("%d",&b);   
    printf("Please enter third number:");
    scanf("%d",&c);

    printf("Average of %d, %d and %d is: %f",a,b,c,(float)(a+b+c)/3);

    return 0;
}