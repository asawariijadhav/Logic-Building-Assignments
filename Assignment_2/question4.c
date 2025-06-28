////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Print first number, second number of times.
//  Problem     : Accept one number and display it given number of times.
//
//                Input  : 12 5
//                Output : 12 12 12 12 12
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo, int iFrequency)
{
  int iCnt = 0;
  for (iCnt = 0; iCnt < iFrequency; iCnt++)
  {
    printf("%d ", iNo);
  }
}

int main()
{
  int iValue = 0;
  int iCount = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  printf("Enter frequency: ");
  scanf("%d", &iCount);

  Display(iValue, iCount);

  return 0;
}
