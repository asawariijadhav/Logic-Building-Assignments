/*

1. Write a program which accept number from user and display the multiplication of factors.

Input:  12
Output: 144  (1 * 2 * 3 * 4 * 6)

Input:  10
Output: 10  (1 * 2 * 5)

Input:   8
Output:   8  (1 * 2 * 4)

Time Complexity:
O(n) where n = iNo/2

*/

#include <stdio.h>

void MultFactors(int iNo)
{
  int i = 0;
  int iMult = 1;

  for (i = 1; i <= iNo / 2; i++)
  {
    if (iNo % i == 0)
    {
      iMult *= i;
    }
  }

  printf("Multiplication of factors: %d\n", iMult);
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  MultFactors(iValue);

  return 0;
}
