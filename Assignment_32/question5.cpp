/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.cpp
//  Description : Toggle first and last nibble of a number.
//  Problem     : Write a program which accepts one number from user and toggles
//                the contents of the first and last nibble. Return modified number.
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
  UINT iMask = 0xF000000F;
  UINT iResult = 0;

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
