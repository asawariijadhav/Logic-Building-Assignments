/*

5. Write a program which accepts area in square feet and convert it into square meter. (1 Square feet = 0.0929 Square meter)

Time Complexity: O(1)

*/

#include <stdio.h>

double SquareMeter(int Value)
{
  double Area = 0.0;
  Area = Value * 0.0929;
}

int main()
{
  int Value = 0;
  double dRet = 0.0;

  printf("Enter area in square feet:\n");
  scanf("%d", &Value);

  double dRet = SquareMeter(Value);
  printf("Area in square meter: %f\n", dRet);

  return 0;
}
