/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display multiplication of factors of given number.
//  Problem     : Write a program which accept number from user and display the
//                multiplication of factors.
//
//                Input  : 12
//                Output : 144  (1 * 2 * 3 * 4 * 6)
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void MultFactors(int iNo)
{
  int iCnt = 0;
  int iMult = 1;

  for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
  {
    if (iNo % iCnt == 0)
    {
      iMult *= iCnt;
    }
  }

  printf("Multiplication of factors: %d\n", iMult);
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  MultFactors(iValue);

  return 0;
}
