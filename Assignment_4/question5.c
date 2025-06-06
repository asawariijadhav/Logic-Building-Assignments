/*

5. Write a program which accept number from user and return difference between summation of all its factors and non factors.

Input:  12
Output: -34   (16 - 50)

Input:  10
Output: -18   (12 - 30)

Input:   8
Output: -6    (15 - 21)

Time Complexity:
O(n) where n = iNo

*/

#include <stdio.h>

int FactDiff(int iNo)
{
  int iCnt = 0, iFactSum = 0, iNonFactSum = 0;

  for (iCnt = 1; iCnt < iNo; iCnt++)
  {
    if (iNo % iCnt == 0)
    {
      iFactSum += iCnt;
    }
    else
    {
      iNonFactSum += iCnt;
    }
  }

  return iFactSum - iNonFactSum;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = FactDiff(iValue);

  printf("Difference between sum of factors and non-factors: %d\n", iRet);

  return 0;
}
