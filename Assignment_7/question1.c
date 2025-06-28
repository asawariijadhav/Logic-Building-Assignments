///////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display n stars on screen.
//
//  Problem     : Write a program which accepts number from user and displays below pattern.
//
//                Input  : 5
//                Output : * * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("*\t");
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number:\n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
