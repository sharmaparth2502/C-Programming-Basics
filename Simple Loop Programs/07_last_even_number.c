//7) Write a program, which finds the last even number
#include <stdio.h>
int main(){
    
    int n, i, num, last_even = 0;
    printf("Enter number of numbers: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("Tell your number:");
        scanf("%d", &num);

        if(num % 2 == 0){
            last_even = num;
        }
    }

    if(last_even != -1){
        printf("The last even number is: %d\n", last_even);
    } else {
        printf("There are no even numbers.\n");
    }

    return 0;
}