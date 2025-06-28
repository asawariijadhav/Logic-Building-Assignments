////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Check whether the given character is an alphabet (A-Z / a-z).
//
//  Problem     : Accept character and check whether it is alphabet or not.
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  char ch = '\0';

  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

  bRet = ChkAlpha(cValue);

  if (bRet == TRUE)
    printf("It is Character\n");
  else
    printf("It is not a Character\n");

  return 0;
}
