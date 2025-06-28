
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display only digits from string.
//  Problem     : Write a program which accepts string from user and displays only
//                digits from that string.
//
//                Input  : "marve89llous121"
//                Output : 89121
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= '0') && (*str <= '9'))
    {
      printf("%c", *str);
    }
    str++;
  }
  printf("\n");
}

int main()
{
  char arr[50];

  printf("Enter string: ");
  scanf("%[^\n]s", arr);

  DisplayDigit(arr);

  return 0;
}
