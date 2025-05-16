/*

4. Write a program which accepts temperature in Fahrenheit and convert it into Celsius. (C = (F - 32) * (5/9))

Input: Fahrenheit = 111.00

Output: Celsius = 43.888889


Time Complexity: O(1)

*/

#include <stdio.h>

double FhtoCs(float F)
{
  return (F - 32) * (5.0 / 9.0);
}

int main()
{
  float F = 0.0;

  printf("Enter temperature in Fahrenheit:\n");
  scanf("%f", &F);

  double dRet = FhtoCs(F);
  printf("Temperature in Celsius: %f\n", dRet);

  return 0;
}
