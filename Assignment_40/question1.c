//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display * symbol 5 times using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Output: *   *   *   *   *
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static int iCnt = 1;

  if (iCnt <= 5)
  {
    printf("*\t");
    iCnt++;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
