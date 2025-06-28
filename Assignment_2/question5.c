////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Check whether the entered number is even or odd.
//  Problem     : Accept one number from user and check whether it is even or odd.
//
//                Input  : 11
//                Output : Number is Odd
//
//                Input  : 20
//                Output : Number is Even
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
  if (iNo % 2 == 0)
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
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number: ");
  scanf("%d", &iValue);

  bRet = ChkEven(iValue);

  if (bRet == TRUE)
  {
    printf("Number is Even");
  }
  else
  {
    printf("Number is Odd");
  }

  return 0;
}
