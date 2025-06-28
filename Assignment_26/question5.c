///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Reverse string in-place.
//  Problem     : Write a program to reverse string in-place.
//
//                Input  : "abcd"
//                Output : "dcba"
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void StrRevX(char *str)
{
  char temp;
  int i = 0, j = 0;

  while (str[j] != '\0')
  {
    j++;
  }
  j = j - 1;

  while (i < j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
  }
}

int main()
{
  char arr[50];

  printf("Enter string: ");
  scanf(" %[^\n]s", arr);

  StrRevX(arr);

  printf("Modified string is %s\n", arr);

  return 0;
}
