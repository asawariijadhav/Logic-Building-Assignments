//////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Print given number of * on screen.
//  Problem     : Write a program which accept number from user and print that number
//                of * on screen.
//
//                Input  : 5
//                Output : * * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("* ");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}
