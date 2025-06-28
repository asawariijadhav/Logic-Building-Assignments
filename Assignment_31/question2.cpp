/////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.cpp
//  Description : OFF the 7th and 10th bits of a number if they are ON.
//  Problem     : Write a program which accepts one number from user and
//                OFFs the 7th and 10th bits of that number if they are ON.
//                Return modified number.
//
//                Input  : 577
//                Output : 1
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
  UINT iMask1 = 1, iMask2 = 1;
  UINT iResult = 0;

  iMask1 = iMask1 << 6; // 7th bit
  iMask2 = iMask2 << 9; // 10th bit

  iMask1 = ~iMask1;
  iMask2 = ~iMask2;

  iResult = iNo & iMask1;
  iResult = iResult & iMask2;

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
