///////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Product of digits using recursion
//  Problem     : Write a recursive program which returns product of digits.
//
//                Input  : 523
//                Output : 30
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Mult(int iNo)
{
  if (iNo == 0)
  {
    return 1;
  }

  return (iNo % 10) * Mult(iNo / 10);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Mult(iValue);

  printf("Multiplication is : %d\n", iRet);

  return 0;
}
