//////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Check whether the number is divisible by 5.
//  Problem     : Accept one number from user and check whether
//                it is divisible by 5.
//
//                Input  : 25
//                Output : Divisible by 5
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
  if ((iNo % 5) == 0)
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

  bRet = Check(iValue);

  if (bRet == TRUE)
  {
    printf("Divisible by 5");
  }
  else
  {
    printf("Not Divisible by 5");
  }

  return 0;
}
