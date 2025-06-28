//////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Concatenate two strings (strcat implementation).
//  Problem     : Write a program which accepts two strings from user and concatenates
//                second string after first string.
//
//                Input  : "Marvellous Infosystems" "Logic Building"
//                Output : "Marvellous Infosystems Logic Building"
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrCatX(char *src, char *dest)
{
  if (src == NULL || dest == NULL)
    return;

  while (*src != '\0')
  {
    src++;
  }

  while (*dest != '\0')
  {
    *src = *dest;
    src++;
    dest++;
  }

  *src = '\0';
}

int main()
{
  char arr[50] = "Marvellous Infosystems";
  char brr[30] = "Logic Building";

  StrCatX(arr, brr);

  printf("%s\n", arr);

  return 0;
}
