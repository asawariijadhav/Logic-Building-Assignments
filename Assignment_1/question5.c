//////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Print given number of * on screen.
//  Problem     : Accept one number from user and print that
//                number of '*' on screen.
//
//                Input  : 5
//                Output : * * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo)
{
  int iCnt = 0;

  for (iCnt = 0; iCnt < iNo; iCnt++)
  {
    printf("* ");
  }
}

int main()
{
  int iValue = 0;
  iValue = 5;

  Accept(iValue);
  return 0;
}
