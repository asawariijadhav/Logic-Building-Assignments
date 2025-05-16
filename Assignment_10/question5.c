/*

5. Write a program which accepts a number from the user and returns the difference between sum of even digits and sum of odd digits.

Input : 2395    → Output : -15   (2 - (3+9+5) = 2 - 17 = -15)
Input : 1018    → Output : 6     (0+8) - (1+1) = 8 - 2 = 6
Input : 8440    → Output : 16    (8+4+4+0) - 0 = 16
Input : 5733    → Output : -18   (0) - (5+7+3+3) = -18


Time Complexity: O(n)

*/

#include <stdio.h>

int CountDiff(int iNo)
{
  int iDigit = 0;
  int iEvenSum = 0, iOddSum = 0;

  if (iNo < 0)
    iNo = -iNo;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit % 2 == 0)
      iEvenSum += iDigit;
    else
      iOddSum += iDigit;

    iNo = iNo / 10;
  }

  return iEvenSum - iOddSum;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = CountDiff(iValue);

  printf("%d\n", iRet);
  return 0;
}
