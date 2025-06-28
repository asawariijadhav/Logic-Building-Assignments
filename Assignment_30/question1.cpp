////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.cpp
//  Description : Check whether 15th bit is ON or OFF.
//  Problem     : Write a program which checks whether the 15th bit
//                in the given number is ON or OFF.
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
  UINT iMask = 0x00004000; // 15th bit
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
    cout << "15th bit is ON\n";
  }
  else
  {
    cout << "15th bit is OFF\n";
  }

  return 0;
}
