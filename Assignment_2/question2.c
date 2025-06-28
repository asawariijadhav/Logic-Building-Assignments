
//////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Print * on screen given number of times (while loop - decrement).
//  Problem     : Accept one number from user and print that number of * on screen.
//
//                Input  : 5
//                Output : * * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  while (iNo > 0)
  {
    printf("* ");
    iNo--;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
