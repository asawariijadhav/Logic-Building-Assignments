//////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Program to print "Marvellous" on screen 5 times.
//  Problem     : Write a program to print "Marvellous" on screen 5 times.
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= 5; iCnt++)
  {
    printf("Marvellous\n");
  }
}

int main()
{
  Display();
  return 0;
}
