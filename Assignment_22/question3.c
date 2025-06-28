////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Check whether the given character is a digit (0-9).
//
//  Problem     : Accept character and check whether it is digit or not.
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkDigit(char ch)
{
  char ch = '\0';

  if (ch >= '0' && ch <= '9')
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

  bRet = ChkDigit(cValue);

  if (bRet == TRUE)
    printf("It is Digit\n");
  else
    printf("It is not a Digit\n");

  return 0;
}
