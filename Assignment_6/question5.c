//////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display table of given number in reverse.
//
//  Problem     : Write a program which accepts number from user and displays its
//                table in reverse.
//
//                Input  : 2
//                Output : 20 18 16 14 12 10 8 6 4 2
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void TableRev(int iNo)
{
  int iCnt = 0;
  for (iCnt = 10; iCnt >= 1; iCnt--)
  {
    printf("%d ", iNo * iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  TableRev(iValue);

  return 0;
}
