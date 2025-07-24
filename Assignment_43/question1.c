////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Count white spaces using recursion
//  Problem     : Write a recursive program which accepts string from user and
//                counts white spaces.
//
//                Input  : HE llo WOr ID
//                Output : 3
//
//  Author      : Asawari Jadhav
//  Date        : 22/07/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int WhiteSpace(char *str)
{
  static int iCnt = 0;

  if (*str != '\0')
  {
    if (*str == ' ')
    {
      iCnt++;
    }
    WhiteSpace(str + 1);
  }

  return iCnt;
}

int main()
{
  char Arr[50];
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", Arr);

  int iRet = WhiteSpace(Arr);
  printf("White spaces are : %d\n", iRet);

  return 0;
}
