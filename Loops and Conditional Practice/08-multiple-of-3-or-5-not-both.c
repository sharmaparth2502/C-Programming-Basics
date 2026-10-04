//8. Write a program which will print all numbers which are either a multiple of 3 or 5 but not both. For example: 3 5 6 9 10 12 18 20 ……
#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        if((i%3==0||i%5==0)&&(i%3!=0||i%5!=0)){
            printf("%d ", i);
        }
    }
    
    return 0;

}