/*
3) Midpoint of a Line Segment
Write a program to find the midpoint of a line segment given two points (x1, y1) and (x2, y2).
Hint: Midpoint = ((x1+x2)/2, (y1+y2)/2)
Example: Input: 2 4 6 8 → Output: (4,6)
*/

#include <stdio.h>
int main(){
    printf("Enter the coordinates of the first point (x1 y1): ");
    double x1, y1;
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    double x2, y2;
    scanf("%lf %lf", &x2, &y2);
    double midpoint_x = (x1 + x2) / 2;
    double midpoint_y = (y1 + y2) / 2;
    printf("The midpoint of the line segment is: (%.2f, %.2f)\n", midpoint_x, midpoint_y);
    return 0;
}