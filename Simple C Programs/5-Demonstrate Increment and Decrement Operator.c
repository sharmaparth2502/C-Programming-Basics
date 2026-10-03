/*
5: Demonstrate Increment and Decrement Operator
 Show pre/post increment and pre/post decrement effects.
*/
#include <stdio.h>
int main(){
    int num=5;
    printf("Number before increment or decrement: %d\n",num);

    printf("Post increment : %d\n",num++);
    printf("after post increment: %d\n",num);

    printf("Pre increment : %d\n",++num);
    printf("after pre increment: %d\n",num);

    printf("Post decrement : %d\n",num--);
    printf("after post decrement: %d\n",num);  

    printf("Pre decrement : %d\n",--num);
    printf("after pre decrement: %d\n",num);
    return 0;
}