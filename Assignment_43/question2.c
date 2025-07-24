/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Return largest digit using recursion
//  Problem     : Write a recursive program which accepts number from user and
//                returns the largest digit.
//
//                Input  : 87983
//                Output : 9
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Max(int iNo)
{
  static int iMax = 0;
  int iDigit = 0;

  if (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit > iMax)
    {
      iMax = iDigit;
    }
    Max(iNo / 10);
  }

  return iMax;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  int iRet = Max(iValue);
  printf("Largest digit is : %d\n", iRet);

  return 0;
}
