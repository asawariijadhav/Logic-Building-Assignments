////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Display numbers from 5 to 1 using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Output: 5   4   3   2   1
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static int iCnt = 5;

  if (iCnt >= 1)
  {
    printf("%d\t", iCnt);
    iCnt--;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
