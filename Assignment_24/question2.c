
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Count number of small characters in string.
//  Problem     : Write a program which accepts string from user and counts number
//                of small characters.
//
//                Input  : "Marvellous"
//                Output : 9
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int CountSmall(char *str)
{
  int iCnt = 0;

  while (*str != '\0')
  {
    if ((*str >= 'a') && (*str <= 'z'))
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{
  char arr[20];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  iRet = CountSmall(arr);

  printf("%d\n", iRet);

  return 0;
}
