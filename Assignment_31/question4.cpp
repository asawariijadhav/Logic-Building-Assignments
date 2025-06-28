//////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.cpp
//  Description : Toggle the 7th and 10th bits of a number.
//  Problem     : Write a program which accepts one number from user and
//                toggles the 7th and 10th bits of that number. Return modified number.
//
//                Input  : 137
//                Output : 713
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
  UINT iMask1 = 1, iMask2 = 1, iMask = 0, iResult = 0;

  iMask1 = iMask1 << 6;
  iMask2 = iMask2 << 9;

  iMask = iMask1 | iMask2;

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
