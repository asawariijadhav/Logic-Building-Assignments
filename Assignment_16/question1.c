////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display left-aligned increasing triangle of stars.
//
//  Problem     : Accept number of rows and number of columns from user and
//                display below pattern.
//
//                Input: iRow = 4, iCol = 4
//                Output:
//                *
//                * *
//                * * *
//                * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 24/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0;

  printf("Enter number of rows:\n");
  scanf("%d", &iValue1);

  Pattern(iValue1, 0);

  return 0;
}
