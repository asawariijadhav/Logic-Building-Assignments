///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display # number * pattern.
//
//  Problem     : Accept number from user and display pattern: # 1 * # 2 * # 3 * # 4 *
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("#\t%d\t*\t", iCnt);
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
