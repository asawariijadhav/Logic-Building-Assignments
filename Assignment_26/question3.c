///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Return index of first occurrence of character.
//  Problem     : Write a program to return index of first occurrence of a character.
//
//                Input  : "Marvellous Multi OS", 'M'
//                Output : 0
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FirstChar(char *str, char ch)
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] == ch)
    {
      return i;
    }
    i++;
  }
  return -1; // If character not found
}

int main()
{
  char arr[50];
  char cValue;
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", arr);

  printf("Enter the character: ");
  scanf(" %c", &cValue);

  iRet = FirstChar(arr, cValue);

  if (iRet != -1)
    printf("Character location is %d\n", iRet);
  else
    printf("Character not found\n");

  return 0;
}
