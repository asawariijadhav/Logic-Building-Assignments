/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display ASCII table (0 to 255) with Decimal, Hex, Octal, and Symbol.
//  Problem     : Write a program which displays ASCII table from 0 to 255 showing
//                Decimal, Hexadecimal, Octal values, and corresponding symbols.
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII()
{
  int i = 0;

  printf("Decimal\tHex\tOctal\tCharacter\n");
  for (int i = 0; i <= 255; i++)
  {
    printf("%d\t%X\t%o\t%c\n", i, i, i, i);
  }
}

int main()
{
  DisplayASCII();
  return 0;
}
