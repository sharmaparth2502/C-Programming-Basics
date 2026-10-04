//10. Write a program which will print those numbers whose last digit is between 5 and 8. For example: 5, 6, 7, 8, 15, 16, 17, 18, 25, 26 ……
#include <stdio.h>
int main(){

    int i;
    for(i=0;i<=100;i++){
        if(i%10==5||i%10==6||i%10==7||i%10==8){
            printf("%d ", i);
        }
    }

    return 0;
}