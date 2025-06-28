/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Print * on screen given number of times (while loop - increment).
//  Problem     : Accept one number from user and print that number of * on screen.
//
//                Input  : 5
//                Output : * * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  while (iCnt < iNo)
  {
    printf("* ");
    iCnt++;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
