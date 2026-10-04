/*
8) Angle of a Triangle (in Degrees)
Given three sides a, b, c, find angle A (opposite side a) in degrees.
Hint: Use Cosine rule: cos(A) = (b² + c² − a²) / (2bc) → then use acos().
Example: Input: 13 12 5 → Output: 90°
*/
#include <stdio.h>
#include <math.h>
int main(){

    printf("Enter the lengths of the three sides of the triangle (a b c): ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double cos_A = (b * b + c * c - a * a) / (2 * b * c);
    double angle_A = acos(cos_A) * 180 / M_PI;

    printf("The angle A of the triangle is: %.2f°\n", angle_A);

    return 0;
}