////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Return reverse of number using recursion
//  Problem     : Write a recursive program which accepts number from user and
//                returns its reverse.
//
//                Input  : 523
//                Output : 325
//
//  Author      : Asawari Jadhav
//  Date        : 24/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Reverse(int iNo)
{
  static int iRev = 0;

  if (iNo != 0)
  {
    iRev = (iRev * 10) + (iNo % 10);
    Reverse(iNo / 10);
  }

  return iRev;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  int iRet = Reverse(iValue);
  printf("Reverse number is : %d\n", iRet);

  return 0;
}
