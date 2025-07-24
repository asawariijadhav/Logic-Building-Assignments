//////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Count small characters using recursion
//  Problem     : Write a recursive program which accepts string from user and
//                counts number of small characters.
//
//                Input  : HElloWOrlD
//                Output : 5
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Small(char *str)
{
  static int iCnt = 0;

  if (*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
      iCnt++;
    }
    Small(str + 1);
  }

  return iCnt;
}

int main()
{
  char Arr[50];
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", Arr);

  int iRet = Small(Arr);
  printf("Number of small letters are : %d\n", iRet);

  return 0;
}
