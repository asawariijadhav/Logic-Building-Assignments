///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Convert string to lowercase.
//  Problem     : Write a program which accepts string from user and converts it
//                into lowercase.
//
//                Input  : "Marvellous Multi OS"
//                Output : "marvellous multi os"
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////








#include <stdio.h>

void strlwrx(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + ('a' - 'A');
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  strlwrx(arr);

  printf("Modified string is %s\n", arr);

  return 0;
}
