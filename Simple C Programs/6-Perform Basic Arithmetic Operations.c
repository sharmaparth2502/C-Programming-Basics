/*
6: Perform Basic Arithmetic Operations
 Addition, subtraction, multiplication, division of two numbers.
*/
#include <stdio.h>
int main(){
    int a=10,b=5;
    printf("Addition of %d and %d is: %d\n",a,b,a+b);
    printf("Subtraction of %d and %d is: %d\n",a,b,a-b);
    printf("Multiplication of %d and %d is: %d\n",a,b,a*b);
    printf("Division of %d and %d is: %f\n",a,b,(float)a/b);
    return 0;
}