/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display small letters a to f using recursion
//  Problem     : Write a recursive program which displays the below pattern.
//
//                Output: a   b   c   d   e   f
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static char ch = 'a';

  if (ch <= 'f')
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
