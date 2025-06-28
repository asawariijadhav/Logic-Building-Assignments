
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Check for special symbols.
//  Problem     : Write a program which accepts character from user and checks
//                whether it is one of these special symbols: !, @, #, $, %, ^, &, *.
//
//  Author      : Asawari Jadhav
//  Date        : 30/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
  if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
      ch == '%' || ch == '^' || ch == '&' || ch == '*')
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character: ");
  scanf(" %c", &cValue);

  bRet = ChkSpecial(cValue);
  if (bRet == TRUE)
  {
    printf("It is a special Character\n");
  }
  else
  {
    printf("It is not a special Character\n");
  }

  return 0;
}
