////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display matrix with increasing sequence across rows.
//
//  Problem     : Accept number of rows and number of columns from user and
//                display below pattern.
//
//                Input: iRow = 4, iCol = 4
//                Output:
//                1  2  3  4
//                5  6  7  8
//                9  1  2  3
//                4  5  6  7
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0, num = 1;

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      printf("%d\t", num);
      num++;

      if (num == 10)
        num = 1;
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}
