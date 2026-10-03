/*
9: Convert Temperature
 Input Celsius, convert to Fahrenheit using:
F=(9/5)×C+32
*/
#include <stdio.h>
int main(){

    float cel;
    printf("Please enter temperature in Celsius:");
    scanf("%f", &cel);
    printf("Temperature in Farenheit is: %f",(9.0/5.0)*cel+32);

    return 0;
}