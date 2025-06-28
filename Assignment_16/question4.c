////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display cross-diagonal star pattern inside a square box.
//
//  Problem     : Accept number of rows and number of columns from user and
//                display below pattern.
//
//                Input: iRow = 4, iCol = 4
//                Output:
//                * * * * * *
//                * *       *
//                *   *     *
//                *     *   *
//                *       * *
//                * * * * * *
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
    for (j = 1; j <= iCol; j++)
    {
      if (i == 1 || i == iRow || j == 1 || j == iCol || i == j || j == (iCol - i + 1))

        printf("*\t");

      else

        printf(" \t");
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
