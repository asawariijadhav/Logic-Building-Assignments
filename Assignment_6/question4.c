///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display table of given number.
//
//  Problem     : Write a program which accepts number from user and displays its table.
//
//                Input  : 5
//                Output : 5 10 15 20 25 30 35 40 45 50
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Table(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= 10; iCnt++)
  {
    printf("%d ", iNo * iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Table(iValue);

  return 0;
}
