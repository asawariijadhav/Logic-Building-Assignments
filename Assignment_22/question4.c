////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Check whether the given character is lowercase (a-z).
//
//  Problem     : Accept character and check whether it is small case or not.
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
  char ch = '\0';

  if (ch >= 'a' && ch <= 'z')
    return TRUE;
  else
    return FALSE;
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character: ");
  scanf("%c", &cValue);

  bRet = ChkSmall(cValue);

  if (bRet == TRUE)
    printf("It is Small case Character\n");
  else
    printf("It is not a Small case Character\n");

  return 0;
}
