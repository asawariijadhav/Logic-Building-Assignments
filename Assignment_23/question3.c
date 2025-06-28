///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Print sequence of characters based on input.
//  Problem     : Write a program which accepts character from user and
//                - if capital, print A to input
//                - if small, print input to 'a' in reverse
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    for (char i = ch; i <= 'Z'; i++)
    {
      printf("%c ", i);
    }
    printf("\n");
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    for (char i = ch; i >= 'a'; i--)
    {
      printf("%c ", i);
    }
    printf("\n");
  }
  else
  {
    printf("%c\n", ch);
  }
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}
