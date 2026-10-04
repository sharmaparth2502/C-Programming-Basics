//5. Write a program which will print all numbers which are multiples of either 3 or 7.
#include <stdio.h>
int main() {

    int i;
    for(i=1;i<=100;i++){
        if(i%3==0 || i%7==0){
            printf("%d\n", i);
        }
    }

    return 0;
}