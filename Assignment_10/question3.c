/*

3. Write a program which accepts a number and returns the count of digits in range 3 to 7.

Input: 2395   → Output: 1
Input: 1018   → Output: 0
Input: 4521   → Output: 1
Input: 9922   → Output: 0


Time Complexity: O(n)

*/

#include <stdio.h>

int CountRange(int iNo)
{
  int iDigit = 0, iCnt = 0;

  if (iNo < 0)
    iNo = -iNo;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit >= 3 && iDigit <= 7)
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

  iRet = CountRange(iValue);

  printf("%d\n", iRet);
  return 0;
}
