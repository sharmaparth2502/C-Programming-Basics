/*
2) Distance Between Two Points
Write a program that reads coordinates of two points (x1, y1) and (x2, y2) and prints the distance.
int: Distance = sqrt((x2-x1)² + (y2-y1)²)
Example: Input: 3 7 11 13 → Output: 10
*/

#include <stdio.h>
#include <math.h>
int main(){
    printf("Enter the coordinates of the first point (x1 y1): ");
    double x1, y1;
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    double x2, y2;
    scanf("%lf %lf", &x2, &y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("The distance between the two points is: %.2f\n", distance);
    


    return 0;
}