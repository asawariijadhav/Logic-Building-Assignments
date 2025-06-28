
////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Display all non factors of given number.
//  Problem     : Write a program which accept number from user and display all its non factors.
//
//                Input  : 12
//                Output : 5   7   8   9   10   11
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt < iNo; iCnt++)
  {
    if (iNo % iCnt != 0)
    {
      printf("%d  ", iCnt);
    }
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  NonFact(iValue);

  return 0;
}
