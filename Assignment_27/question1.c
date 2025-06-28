///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Copy entire string (strcpy implementation).
//  Problem     : Write a program which accepts string from user and copies entire 
//                string into another string.
//
//                Input  : "Marvellous Multi OS"
//                Output : Marvellous Multi OS
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
  if (src == NULL || dest == NULL)
    return;

  while (*src != '\0')
  {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30];

  StrCpyX(arr, brr);

  printf("Copied String: %s\n", brr);

  return 0;
}
