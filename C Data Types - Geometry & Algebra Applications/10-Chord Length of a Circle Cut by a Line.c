/*
10) Chord Length of a Circle Cut by a Line
For a circle with center (h,k) and radius r, and a vertical line x = s, find the chord length.
Hint: Distance = |s-h|, Chord length = 2 * sqrt(r² − distance²)
Example: Input: 2 4 13 7 → Output: 24
*/
#include <stdio.h>
#include <math.h>
int main(){
    double h,k,r,s;
    printf("Please enter coordinates (h,k) of the center of the circle: ");
    scanf("%lf %lf", &h, &k);
    printf("\nPlease enter the radius of the circle: ");
    scanf("%lf", &r);
    printf("\nPlease enter the x-coordinate of the vertical line (x = s): ");
    scanf("%lf", &s);
    double distance = fabs(s-h);
    double chord_length = 2 * sqrt(r * r - distance * distance);
    printf("Chord length: %.2f\n", chord_length);

    return 0;
}