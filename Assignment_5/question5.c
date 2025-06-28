//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Print multiples of 5 up to given number.
//  Problem     : Write a program which accept number and print its multiples of 5 up to that number.
//
//                Input  : 25
//                Output : 5 10 15 20 25
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void MultDisplay(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 5 == 0)
    {
      printf("%d ", iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  MultDisplay(iValue);

  return 0;
}
