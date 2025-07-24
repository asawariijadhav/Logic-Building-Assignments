///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Calculate factorial using recursion
//  Problem     : Write a recursive program to calculate factorial of number.
//
//                Input  : 5
//                Output : 120
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Fact(int iNo)
{
  if (iNo <= 1)
  {
    return 1;
  }

  return iNo * Fact(iNo - 1);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Fact(iValue);

  printf("Factorial is : %d\n", iRet);

  return 0;
}
