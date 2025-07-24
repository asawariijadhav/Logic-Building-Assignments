////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display numbers from 1 to N using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Input : 5
//                Output: 1   2   3   4   5
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  static int iCnt = 1;

  if (iCnt <= iNo)
  {
    printf("%d\t", iCnt);
    iCnt++;
    Display(iNo);
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
