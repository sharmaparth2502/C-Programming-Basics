//9. Write a program which will print those numbers whose last digit is a multiple of 3. For example: 0, 3, 6, 9, 10, 13, 16, 19, 20, 23 ……
#include <stdio.h>
int main(){

    int i;
    for(i=0;i<=100;i++){
        if(i%10==0 || i%10==3 || i%10==6 || i%10==9){
            printf("%d ", i);
        }
    }

    return 0;
}
