///////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display capital letters A to F using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Output: A   B   C   D   E   F
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static char ch = 'A';

  if (ch <= 'F')
  {
    printf("%c\t", ch);
    ch++;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
