////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Convert US dollars to Indian currency.
//
//  Problem     : Accept amount in US dollars and return its corresponding value in 
//                Indian currency.(1 USD = 70 INR)
//                
//                Input  : 10
//                Output : 700
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int iNo)
{
  return iNo * 70;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the number of USD:\n");
  scanf("%d", &iValue);

  iRet = DollarToINR(iValue);
  printf("Value in INR is: %d\n", iRet);

  return 0;
}
