////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Return smallest digit using recursion
//  Problem     : Write a recursive program which accepts number from user and
//                returns the smallest digit.
//
//                Input  : 87983
//                Output : 3
//
//  Author      : Asawari Jadhav
//  Date        : 24/07/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Min(int iNo)
{
  static int iMin = 9;
  int iDigit = 0;

  if (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit < iMin)
    {
      iMin = iDigit;
    }
    Min(iNo / 10);
  }

  return iMin;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  int iRet = Min(iValue);
  printf("Smallest digit is : %d\n", iRet);

  return 0;
}
