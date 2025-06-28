///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Difference between sum of even and odd digits.
//
//  Problem     : Write a program which accepts a number from the user and returns the
//                difference between sum of even digits and sum of odd digits.
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////

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
