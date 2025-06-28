
/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Print even factors of given number.
//  Problem     : Write a program which accept one number from user and print
//                even factors of that number.
//
//                Input  : 24
//                Output : 2 4 6 8 12
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
  int iCnt = 0;

  if (iNo <= 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt < iNo; iCnt++) // strictly less than iNo to exclude the number itself
  {
    if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
    {
      printf("%d ", iCnt);
    }
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  printf("Even factors (excluding the number) are: ");
  DisplayEvenFactor(iValue);

  return 0;
}
