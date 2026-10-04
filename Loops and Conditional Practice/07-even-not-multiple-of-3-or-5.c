//7. Write a program which will print all numbers which are even but not a multiple of either 3 or 5. For example: 2 4 8 14 16 22 ……
#include <stdio.h>
int main(){

    int i;
    for(i=1;i<=100;i++){
        if(i%2==0 && (i%3!=0 && i%5!=0)){
            printf("%d ", i);
        }
    }


    return 0;
}