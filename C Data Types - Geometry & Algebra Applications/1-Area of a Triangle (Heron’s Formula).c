/*
1) Area of a Triangle (Heron’s Formula)
Write a program that reads three sides of a triangle and prints its area.
Hint: Use s = (a+b+c)/2, Area = sqrt(s(s-a)(s-b)(s-c)).
Example: Input: 5 7 10 → Output: 16.24
*/

#include <stdio.h>
#include <math.h>
int main(){

    printf("Enter the lengths of the three sides of the triangle: ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is: %.2f\n", area);
    return 0;
}