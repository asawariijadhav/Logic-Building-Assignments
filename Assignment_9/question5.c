/*

5. Write a program which accepts number from user and count frequency of such a digits which are less than 6.

Time Complexity:

*/

#include <stdio.h>

int Count(int iNo)
{
  int iCnt = 0, iDigit = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit < 6)
    {
      iCnt++;
    }
    iNo = iNo / 10;
  }
  return iCnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Count(iValue);
  printf("%d\n", iRet);

  return 0;
}
