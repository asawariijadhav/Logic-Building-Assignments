/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display factors of given number in decreasing order.
//  Problem     : Write a program which accept number from user and display its 
//                factors in decreasing order.
//
//                Input  : 12
//                Output : 6   4   3   2   1
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void FactRev(int iNo)
{
  int iCnt = 0;

  for (iCnt = iNo / 2; iCnt >= 1; iCnt--)
  {
    if (iNo % iCnt == 0)
    {
      printf("%d  ", iCnt);
    }
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  FactRev(iValue);

  return 0;
}
