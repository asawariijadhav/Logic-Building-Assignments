///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display number and # in pattern.
//
//  Problem     : Accept number from user and display pattern: 5 # 4 # 3 # 2 # 1 #
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = iNo; iCnt >= 1; iCnt--)
  {
    printf("%d\t#\t", iCnt);
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
