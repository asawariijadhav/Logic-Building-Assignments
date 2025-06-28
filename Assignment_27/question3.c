
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Copy capital characters into another string.
//  Problem     : Write a program which accepts string from user and copies
//                capital characters into another string.
//
//                Input  : "Marvellous Multi OS"
//                Output : MMOS
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void StrCpyCap(char *src, char *dest)
{
  if (src == NULL || dest == NULL)
    return;

  while (*src != '\0')
  {
    if ((*src >= 'A') && (*src <= 'Z'))
    {
      *dest = *src;
      dest++;
    }
    src++;
  }
  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30];

  StrCpyCap(arr, brr);

  printf("%s\n", brr);

  return 0;
}
