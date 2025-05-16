/*

1. Write a program which accepts radius of circle from user and calculate its area. (Area = π * Radius * Radius)

Input: Radius = 5.3
Output:Area = 88.2026

Time Complexity: O(1)

*/

#include <stdio.h>

double CircleArea(float Radius)
{
  return 3.14 * Radius * Radius;
}

int main()
{
  float Radius = 0.0;

  printf("Enter the radius:\n");
  scanf("%f", &Radius);

  double dRet = CircleArea(Radius);
  printf("Area is: %f\n", dRet);

  return 0;
}
