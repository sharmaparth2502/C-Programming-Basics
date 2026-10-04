/*
7) Intersection of Two Lines (Simplified)
Find the intersection point of two lines: ax + by + c = 0 and px + qy + r = 0.
 Hint: Solve equations using determinant formula.
 Example: Input: 4 8 12 2 7 3 → Output: (-5,1)
*/
#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the coefficients a, b, c of the first line (ax + by + c = 0): ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Enter the coefficients p, q, r of the second line (px + qy + r = 0): ");
    double p, q, r;
    scanf("%lf %lf %lf", &p, &q, &r);

    double determinant = a * q - b * p;

    if (determinant == 0) {
        printf("The lines are parallel and do not intersect.\n");
    } else {
        double x = (b * r - c * q) / determinant;
        double y = (c * p - a * r) / determinant;
        printf("The intersection point of the two lines is: (%.2f, %.2f)\n", x, y);
    }

    return 0;
}