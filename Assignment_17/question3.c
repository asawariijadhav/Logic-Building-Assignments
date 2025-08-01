////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Display symmetric hollow cross-diagonal pattern.
//
//  Problem     : Accept number of rows and number of columns from user and
//                display below pattern.
//
//                Input: iRow = 4, iCol = 4
//                Output:
//                * * * * * *
//                *       * *
//                *     *   *
//                *   *     *
//                * *       *
//                * * * * * *
//
//  Author      : Asawari Jadhav
//  Date        : 24/05/2025
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (int i = 1; i <= iRow; i++)
  {
    for (int j = 1; j <= iCol; j++)
    {
      if (i == 1 || i == iRow || j == 1 || j == iCol || i == j || j == (iCol - i + 1))

        printf("* ");

      else

        printf("  ");
    }
    printf("\n");
  }
}
int main()

{

  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns");

  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}
