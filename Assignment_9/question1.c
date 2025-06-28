////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display digits of number in reverse order.
//
//  Problem     : Write a program which accepts number from user and display its
//                digits in reverse order.
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
  int iDigit = 0;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number:\n");
  scanf("%d", &iValue);

  DisplayDigit(iValue);

  return 0;
}
