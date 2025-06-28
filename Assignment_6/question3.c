/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Find factorial of number.
//
//  Problem     : Write a program which finds factorial of given number.
//
//                Input  : 5
//                Output : 120
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFact = iFact * iCnt;
  }

  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Factorial(iValue);
  printf("Factorial of number is %d\n", iRet);

  return 0;
}
