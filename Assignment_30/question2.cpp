////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.cpp
//  Description : Check whether 5th and 18th bits are ON or OFF.
//  Problem     : Write a program which checks whether the 5th and 18th bits
//                in the given number are ON or OFF.
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  UINT iMask = 0x00020010; // 5th , 18th bit
  UINT iResult = 0;

  iResult = iNo & iMask;

  return (iResult == iMask);
}

int main()
{
  UINT iValue = 0;
  bool bRet = false;

  cout << "Enter number : \n";
  cin >> iValue;

  bRet = CheckBit(iValue);

  if (bRet == true)
  {
    cout << "5th and 18th bits are ON\n";
  }

  else
  {
    cout << "One or both bits are OFF\n";
  }

  return 0;
}
