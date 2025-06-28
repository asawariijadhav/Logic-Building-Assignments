
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Toggle case of character.
//  Problem     : Write a program which accepts character from user and toggles its
//                case. If small → capital, if capital → small, else display as is.
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
  if ((ch >= 'a') && (ch <= 'z'))

    printf("%c\n", ch - ('a' - 'A'));

  else if ((ch >= 'A') && (ch <= 'Z'))

    printf("%c\n", ch + ('a' - 'A'));

  else
    printf("%c\n", ch);
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}
