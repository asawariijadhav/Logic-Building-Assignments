////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Display diagonal '$' with left triangle '#' pattern.
//
//  Problem     : Accept number of rows and number of columns from user and
//                display below pattern.
//
//                Input: iRow = 4, iCol = 4
//                Output:
//                $ * * * *
//                # $ * * *
//                # # $ * *
//                # # # $ *
//                # # # # $
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
      if (i == j)

        printf("$\t");

      else if (j > i)

        printf("*\t");

      else

        printf("#\t");
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
