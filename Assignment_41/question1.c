///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display * N times using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Input : 5
//                Output: *   *   *   *   *
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  if (iNo > 0)
  {
    printf("*\t");
    Display(iNo - 1);
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
