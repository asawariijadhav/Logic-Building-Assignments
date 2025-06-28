////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display alternating even and odd number rows.
//
//  Problem     : Accept number of rows and number of columns from user and 
//                display below pattern.
//
//                Input: iRow = 4, iCol = 5
//                Output:
//                2  4  6  8 10
//                1  3  5  7  9
//                2  4  6  8 10
//                1  3  5  7  9
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0, iStart = 0;

  for (i = 1; i <= iRow; i++)
  {

    if (i % 2 != 0)
      iStart = 2;
    else
      iStart = 1;

    for (j = 1; j <= iCol; j++)
    {
      printf("%d\t", iStart);
      iStart = iStart + 2;
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
