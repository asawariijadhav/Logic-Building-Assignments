///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display capital letters A to N using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Input : 6
//                Output: A   B   C   D   E   F
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  static char ch = 'A';

  if (iNo > 0)
  {
    printf("%c\t", ch);
    ch++;
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
