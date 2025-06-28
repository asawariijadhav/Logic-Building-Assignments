////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Find difference between even and odd factorial of given number.
//
//  Problem     : Write a program which returns the difference between even factorial
//                and odd factorial of given number.
//
//                Input  : 5
//                Output : -7  (8 - 15)
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int EvenFactorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      iFact *= iCnt;
    }
  }
  return iFact;
}

int OddFactorial(int iNo)
{
  int iFact = 1;
  for (int i = 1; i <= iNo; i++)
  {
    if (i % 2 != 0)
    {
      iFact *= i;
    }
  }
  return iFact;
}

int FactorialDiff(int iNo)
{
  return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number:\n");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);
  printf("Difference is: %d\n", iRet);

  return 0;
}
