/*
10: Area and Perimeter of a Rectangle
 Input length and width.
 Compute area = length × width, perimeter = 2 × (length + width).
*/
#include <stdio.h>
int main(){

    float length,width;
    printf("Please enter length of rectangle: ");
    scanf("%f",&length);
    printf("Please enter width of rectangle: ");
    scanf("%f",&width);

    printf("Area of rectangle is: %f\n",length*width);
    printf("Perimeter of rectangle is: %f\n",2*(length+width));

    return 0;
}