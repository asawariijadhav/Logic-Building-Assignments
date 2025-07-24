/////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Count characters in string using recursion
//  Problem     : Write a recursive program which counts characters in a string.
//
//                Input  : Hello
//                Output : 5
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Strlen(char *str)
{
  if (*str == '\0')
  {
    return 0;
  }

  return 1 + Strlen(str + 1);
}

int main()
{
  char arr[50];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%s", arr);

  iRet = Strlen(arr);

  printf("Length is : %d\n", iRet);

  return 0;
}
