/*

4. Write a program which accepts a number from user and returns the multiplication of all digits.

Input : 2395    → Output : 270  (2 * 3 * 9 * 5)
Input : 1018    → Output : 8    (1 * 0 * 1 * 8 = 0, but often zero is ignored)
Input : 9440    → Output : 144
Input : 922432  → Output : 864


Time Complexity: O(n)

*/

#include <stdio.h>

int MultDigits(int iNo)
{
  int iDigit = 0, iMult = 1;
  int hasNonZero = 0;

  if (iNo < 0)
    iNo = -iNo;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit != 0)
    {
      iMult = iMult * iDigit;
      hasNonZero = 1;
    }

    iNo = iNo / 10;
  }

  return hasNonZero ? iMult : 0;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = MultDigits(iValue);

  printf("%d\n", iRet);
  return 0;
}
