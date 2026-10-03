/*
2: Take User Input and Print
 Input name and phone number from the terminal.
 Print them back.
*/
#include <stdio.h>
int main(){
    char name[100];
    long long phone;
    printf("Please enter your name:");
    scanf("%s", name);
    printf("Please enter your phone number:");
    scanf("%lld", &phone);
    printf("\nName: %s\n Phone number=%lld",name,phone);

    return 0;
}