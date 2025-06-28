/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Print even numbers on screen given number of times.
//  Problem     : Write a program which accept one number from user and print
//                that number of even numbers on screen.
//
//                Input  : 5
//                Output : 2 4 6 8 10
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo)
{
  int iCnt = 1;

  if (iNo <= 0)
  {
    printf("Please enter a positive number.\n");
    return;
  }

  while (iCnt <= iNo)
  {
    printf("%d ", iCnt * 2); // even numbers: 2, 4, 6, ...
    iCnt++;
  }

  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  PrintEven(iValue);

  return 0;
}
