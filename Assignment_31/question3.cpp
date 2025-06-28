////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.cpp
//  Description : Toggle the 7th bit of a number.
//  Problem     : Write a program which accepts one number from user and
//                toggles the 7th bit of that number. Return modified number.
//
//                Input  : 137
//                Output : 201
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
  UINT iMask = 1;
  UINT iResult = 0;

  iMask = iMask << 6;

  iResult = iNo ^ iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iRet = 0;

  cout << "Enter number : \n";
  cin >> iValue;

  iRet = ToggleBit(iValue);

  cout << "Updated number is : " << iRet << "\n";

  return 0;
}
