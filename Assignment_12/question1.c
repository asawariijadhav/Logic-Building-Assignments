////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display pattern of * with given rows and columns.
//
//  Problem     : Accept number of rows and columns and display pattern.
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;
  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns:\n");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}
