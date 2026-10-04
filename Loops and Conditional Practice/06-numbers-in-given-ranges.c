//6. Write a program which will print all numbers which are either between 50 and 70, or less than 20, or more than 90.
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        if((i>50 && i<70) || (i<20) || (i>90)){
            printf("%d\n", i);
        }
    }
    return 0;
}