/*
6) Circle: Center and Radius
Equation: x² + y² + ax + by + c = 0. Print its center and radius.
 Hint: Center = (-a/2, -b/2), Radius = sqrt((a/2)² + (b/2)² - c)
 Example: Input: 10 -6 -2 → Output: Center = (-5,3), Radius = 6
*/
#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the coefficients a, b, and c of the circle equation (x² + y² + ax + by + c = 0): ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double center_x = -a / 2;
    double center_y = -b / 2;
    double radius = sqrt(pow(a / 2, 2) + pow(b / 2, 2) - c);
    printf("The center of the circle is: (%.2f, %.2f)\n", center_x, center_y);
    printf("The radius of the circle is: %.2f\n", radius);
    return 0;
}