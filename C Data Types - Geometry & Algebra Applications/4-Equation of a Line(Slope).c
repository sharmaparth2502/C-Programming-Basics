/*
4) Equation of a Line: Slope
For a line ax + by + c = 0, find its slope.
Hint: slope = -a/b.
Example: Input: 3 5 8 → Output: -0.6
*/
#include <stdio.h>

int main(){
    printf("Enter the coefficients a, b, and c of the line (ax + by + c = 0): ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (b == 0) {
        printf("The line is vertical and does not have a defined slope.\n");
    } else {
        double slope = -a / b;
        printf("The slope of the line is: %.2f\n", slope);
    }
    return 0;
}