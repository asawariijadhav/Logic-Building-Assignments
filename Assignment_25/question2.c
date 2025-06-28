
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Convert string to uppercase.
//  Problem     : Write a program which accepts string from user and converts it
//                into uppercase.
//
//                Input  : "Marvellous Multi OS"
//                Output : "MARVELLOUS MULTI OS"
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void struprx(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - ('a' - 'A');
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  struprx(arr);

  printf("Modified string is %s\n", arr);

  return 0;
}
