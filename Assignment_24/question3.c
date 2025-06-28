
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Return difference between frequency of small and capital characters.
//  Problem     : Write a program which accepts string from user and returns difference
//                between frequency of small and capital characters.
//
//                Input  : "Marvellous"
//                Output : 6 (8 - 2)
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Difference(char *str)
{
  int iSmall = 0;
  int iCapital = 0;

  while (*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
      iCapital++;
    }
    else if ((*str >= 'a') && (*str <= 'z'))
    {
      iSmall++;
    }
    str++;
  }

  return iSmall - iCapital;
}

int main()
{
  char arr[20];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  iRet = Difference(arr);

  printf("%d\n", iRet);

  return 0;
}
