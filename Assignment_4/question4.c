//////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Return summation of all non factors of given number.
//  Problem     : Write a program which accept number from user and return summation 
//                of all its non factors.
//
//                Input  : 12
//                Output : 50
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
  int iCnt = 0, iSum = 0;

  for (iCnt = 1; iCnt < iNo; iCnt++)
  {
    if (iNo % iCnt != 0)
    {
      iSum += iCnt;
    }
  }

  return iSum;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = SumNonFact(iValue);

  printf("Summation of non-factors: %d\n", iRet);

  return 0;
}
