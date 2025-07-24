///////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display small letters a to N using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Input : 6
//                Output: a   b   c   d   e   f
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  static char ch = 'a';

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
