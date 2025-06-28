///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.cpp
//  Description : OFF the 7th bit of a number if it is ON.
//  Problem     : Write a program which accepts one number from user and
//                OFFs the 7th bit of that number if it is ON. Return modified number.
//
//                Input  : 79
//                Output : 15
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
  UINT iMask = 1;
  UINT iResult = 0;

  iMask = iMask << 6;
  iMask = ~iMask;

  iResult = iNo & iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iRet = 0;

  cout << "Enter number : \n";
  cin >> iValue;

  iRet = OffBit(iValue);

  cout << "Updated number is : " << iRet << "\n";

  return 0;
}
