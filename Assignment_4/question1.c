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
  int iCnt = 0;
  int iMult = 1;

  for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
  {
    if (iNo % iCnt == 0)
    {
      iMult *= iCnt;
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
