///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Summation of digits using recursion
//  Problem     : Write a recursive program which returns sum of digits.
//
//                Input  : 879
//                Output : 24
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Sum(int iNo)
{
  if (iNo == 0)
  {
    return 0;
  }

  return (iNo % 10) + Sum(iNo / 10);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Sum(iValue);

  printf("Summation is : %d\n", iRet);

  return 0;
}
