///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Count number of white spaces in string.
//  Problem     : Write a program which accepts string from user and counts number
//                of white spaces.
//
//                Input  : "MarvellouS"
//                Output : 0
//
//                Input  : "Marvellous Infosystems"
//                Output : 1
//
//                Input  : "Marvellous Infosystems by Piyush Manohar Khairnnar"
//                Output : 5
//
//  Author      : Asawari Jadhav
//  Date        : 02/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountWhite(char *str)
{
  int iCnt = 0;

  while (*str != '\0')
  {
    if (*str == ' ')
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{
  char arr[100];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^\n]s", arr);

  iRet = CountWhite(arr);

  printf("%d\n", iRet);

  return 0;
}
