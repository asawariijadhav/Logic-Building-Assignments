
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display string in reverse order.
//  Problem     : Write a program which accepts string from user and displays it
//                in reverse order.
//
//                Input  : "MarvellousS"
//                Output : "SuollevraM"
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
  int i = 0, j = strlen(str) - 1;
  char temp;

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
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  Reverse(arr);

  printf("Reversed string: %s\n", arr);

  return 0;
}
