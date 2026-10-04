//3. Write a program which will print all even numbers less than 50 and all odd numbers more than 50.
#include <stdio.h>
int main(){

    int i;
    for(i=0;i<50;i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }
    int j;
    for(j=50;j<100;j++){
        if(j%2!=0){
            printf("%d\n", j);
        }
    }

    return 0;
}