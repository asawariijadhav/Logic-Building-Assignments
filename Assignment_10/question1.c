/*

1. Write a program which accepts a number from the user and returns the count of even digits.

Input: 2395   → Output: 1  
Input: 1018   → Output: 2  
Input: -1018  → Output: 2  
Input: 8462   → Output: 4


Time Complexity: O(n)

*/

#include <stdio.h>

int CountEven(int iNo)
{
  int iDigit = 0, iCnt = 0;

  if (iNo < 0)
    iNo = -iNo;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit % 2 == 0)
    {
      iCnt++;
    }
    iNo = iNo / 10;
  }
  return iCnt;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = CountEven(iValue);

  printf("%d\n", iRet);
  return 0;
}
