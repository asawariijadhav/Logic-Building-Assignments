///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Print even numbers till given number.
//  Problem     : Write a program which accept number from user and print even numbers 
//                till that number.
//
//                Input  : 8
//                Output : 2 4 6 8
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEven(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      printf("%d ", iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  DisplayEven(iValue);

  return 0;
}
