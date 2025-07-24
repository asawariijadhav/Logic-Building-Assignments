/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display numbers 1 to 5 using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Output: 1   2   3   4   5
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static int iCnt = 1;

  if (iCnt <= 5)
  {
    printf("%d\t", iCnt);
    iCnt++;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
