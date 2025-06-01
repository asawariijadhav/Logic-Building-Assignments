/*

1. Write a program which accepts radius of circle from user and calculate its area. (Area = π * Radius * Radius)

Input: Radius = 5.3
Output:Area = 88.2026

Time Complexity: O(1)

*/

#include <stdio.h>

double CircleArea(float Radius)
{
  double Area = 0;
  double Pi = 3.14;
  Area = Pi * Radius * Radius;
  return Area;
}

int main()
{
  float Radius = 0.0;
  double dRet = 0.0;

  printf("Enter the radius:\n");
  scanf("%f", &Radius); // Taking input

  dRet = CircleArea(Radius);     // Function call
  printf("Area is: %f\n", dRet); // Output result

  return 0;
}
