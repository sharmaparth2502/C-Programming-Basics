/*
5) Distance of a Point from a Line
Find the distance between a point (x1, y1) and a line ax + by + c = 0.
 Hint: Distance = |ax1 + by1 + c| / sqrt(a²+b²)
 Example: Input: 6 7 3 4 2 → Output: 9.6
*/
#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the coordinates of the point (x1 y1): ");
    double x1, y1;
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coefficients a, b, and c of the line (ax + by + c = 0): ");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double distance = (a * x1 + b * y1 + c) / sqrt(a * a + b * b);
    printf("The distance between the point and the line is: %.2f\n", fabs(distance));
    return 0;
}