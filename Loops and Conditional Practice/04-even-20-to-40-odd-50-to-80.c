//4. Write a program which prints all even numbers between 20 and 40, and all odd numbers between 50 and 80.
#include <stdio.h>
int main(){

    int i;
    for(i=20;i<=40;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    int j;
    for(j=50;j<=80;j++){
        if(j%2!=0){
            printf("%d ",j);
        }
    }


    return 0;
}