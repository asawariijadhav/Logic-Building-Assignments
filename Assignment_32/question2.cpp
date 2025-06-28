////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.cpp
//  Description : Turn OFF the bit at given position in a number.
//  Problem     : Write a program which accepts one number and position from user
//                and turns OFF the bit at that position. Return the modified number.
//
//                Input  : 10  2
//                Output : 8
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
  UINT iMask = 1;
  UINT iResult = 0;

  if (iPos < 1 || iPos > 32)
  {
    cout << "Invalid position\n";
    return iNo;
  }

  iMask = iMask << (iPos - 1);
  iMask = ~iMask;
  iResult = iNo & iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iLocation = 0, iRet = 0;

  cout << "Enter number : \n";
  cin >> iValue;

  cout << "Enter the position : \n";
  cin >> iLocation;

  iRet = OffBit(iValue, iLocation);

  cout << "Updated number is : " << iRet << "\n";

  return 0;
}
