////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Count frequency of digit 4 in number.
//
//  Problem     : Write a program which accepts number from user and return the
//                frequency of 4 in it.
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountFour(int iNo)
{
  int iCnt = 0, iDigit = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit == 4)
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

  iRet = CountFour(iValue);
  printf("%d\n", iRet);

  return 0;
}
