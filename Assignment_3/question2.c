
/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Print even factors of given number.
//  Problem     : Write a program which accept one number from user and print 
//                even factors of that number.
//
//                Input  : 36
//                Output : 2 4 6 12 18
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
/////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayFactor(int iNo)
{
  int iCnt = 0;

  if (iNo <= 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
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

  printf("Even factors of %d are: ", iValue);
  DisplayFactor(iValue);

  return 0;
}
