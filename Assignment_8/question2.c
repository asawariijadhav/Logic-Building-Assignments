/*

2. Write a program which accepts width & height of rectangle from user and calculate its area. (Area = Width × Height)

Input: Width = 5.3
Height = 9.78

Output:Area = 51.834


Time Complexity: O(1)

*/

#include <stdio.h>

double RectangleArea(float Width, float Height)
{
  return Width * Height;
}

int main()
{
  float Width = 0.0, Height = 0.0;

  printf("Enter Width:\n");
  scanf("%f", &Width);

  printf("Enter Height:\n");
  scanf("%f", &Height);

  double dRet = RectangleArea(Width, Height);
  printf("Area is: %f\n", dRet);

  return 0;
}
