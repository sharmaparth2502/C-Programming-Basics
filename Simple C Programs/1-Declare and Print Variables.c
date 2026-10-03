/*
1: Declare and Print Variables
Declare int, float, double, bool, and char.
Print their values.
*/
#include <stdio.h>
#include <stdbool.h>
int main(){
    int a=4;
    float b=4.3324;
    double c=984.8399879898094934;
    bool func=true;
    char d='A';
    
    printf("Integer=%i\nFloat=%f\nDouble=%lf\nBoolean=%d\nCharacter=%c",a,b,c,func,d);
    
    return 0;
}