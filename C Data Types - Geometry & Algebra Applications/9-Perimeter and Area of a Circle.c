/*
9) Perimeter and Area of a Circle
Write a program that reads radius r of a circle and prints its perimeter and area.
Hint: Perimeter = 2πr, Area = πr².
Example: Input: 5 → Output: Perimeter = 31.4, Area = 78.5
*/
#include <stdio.h>
#include <math.h>
int main(){
    double r;
    printf("Please enter the radius of the circle: ");
    scanf("%lf",&r);
    float perimeter=2*M_PI*r;
    float area=M_PI*pow(r,2);
    printf("The perimeter of the circle is: %.2f\n", perimeter);
    printf("The area of the circle is: %.2f\n", area);


    return 0;
}