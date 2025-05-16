/*

4. Write a program which accept number from user and return summation of all its non factors.

Input:  12
Output: 50

Input:  10
Output: 38

Input:   8
Output: 21

Time Complexity:
O(n) where n = iNo

*/

#include <stdio.h>

int SumNonFact(int iNo)
{
  int i = 0, iSum = 0;

  for (i = 1; i < iNo; i++)
  {
    if (iNo % i != 0)
    {
      iSum += i;
    }
  }

  return iSum;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = SumNonFact(iValue);

  printf("Summation of non-factors: %d\n", iRet);

  return 0;
}
