///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display even numbers pattern.
//
//  Problem     : Accept number from user and display pattern: 2 4 6 8 10 12 14 16
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d\t", iCnt * 2);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number of elements\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}
