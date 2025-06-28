
///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display ASCII value in Decimal, Octal, and Hexadecimal.
//  Problem     : Write a program which accepts character from user and displays its
//                ASCII value in Decimal, Octal, and Hexadecimal formats.
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
  printf("Decimal\t\t: %d\n", ch);
  printf("Octal\t\t: %o\n", ch);
  printf("Hexadecimal\t: 0X%X\n", ch);
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}
