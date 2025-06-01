/*
1. Accept number of rows and number of columns from user and display below pattern.
Input: iRow = 4, iCol = 4
Output:
*
* *
* * *
* * * *
*/

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
