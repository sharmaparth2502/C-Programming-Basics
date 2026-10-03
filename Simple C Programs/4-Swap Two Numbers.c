/*
4: Swap Two Numbers
Swap two integers using a temporary variable.
Extension: swap without a third variable.
*/
#include <stdio.h>
int main(){
    int a=5,b=10,temp;
    printf("Before swapping: a=%d, b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: a=%d, b=%d\n",a,b);
    return 0;
}
/* now, to do the same without using a third variable :- (comment out the following code)*/
/*
#include <stdio.h>
    int main(){
    int a=5,b=10;
    printf("Before swapping: a=%d, b=%d\n",a,b);
    a=a+b; 
    b=a-b;
    a=a-b;
    printf("After swapping: a=%d, b=%d\n",a,b);
    return 0;
    }
*/