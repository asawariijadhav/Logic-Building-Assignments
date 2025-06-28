//////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Program to print numbers from 5 to 1 on screen.
//  Problem     : Write a program to print numbers from 5 to 1 on screen.
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  int iCnt = 5;
  while (iCnt >= 1)
  {
    printf("%d\n", iCnt);
    iCnt--;
  }
}

int main()
{
  Display();
  return 0;
}
