////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display pattern of capital and small letters alternately.
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
  char ch = '\0';

  for (i = 0; i < iRow; i++)
  {
    if (i % 2 == 0)
    {
      ch = 'A';
    }
    else
    {
      ch = 'a';
    }

    for (j = 0; j < iCol; j++)
    {
      printf("%c\t", ch);
      ch++;
    }
    printf("\n");
  }
}
int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns\n");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}
