////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Calculate odd factorial of given number.
//
//  Problem     : Write a program to find odd factorial of given number.
//
//                Input  : 5
//                Output : 15  (5 * 3 * 1)
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int OddFactorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 != 0)
    {
      iFact *= iCnt;
    }
  }
  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number:\n");
  scanf("%d", &iValue);

  iRet = OddFactorial(iValue);
  printf("Odd factorial of number is: %d\n", iRet);

  return 0;
}
