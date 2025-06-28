////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.cpp
//  Description : ON the first 4 bits of a number.
//  Problem     : Write a program which accepts one number from user and
//                turns ON its first 4 bits. Return modified number.
//
//                Input  : 73
//                Output : 79
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
  UINT iMask = 0x0000000F;
  UINT iResult = 0;

  iResult = iNo | iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iRet = 0;

  cout << "Enter number : \n";
  cin >> iValue;

  iRet = OnBit(iValue);

  cout << "Updated number is : " << iRet << "\n";

  return 0;
}
