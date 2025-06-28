//////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.cpp
//  Description : Check whether the bit at given position is ON or OFF.
//  Problem     : Write a program which accepts one number and a position
//                from user and checks whether the bit at that position is ON.
//                If it is ON return TRUE, otherwise return FALSE.
//
//                Input  : 10  2
//                Output : TRUE
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
/////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
  UINT iMask = 1;
  UINT iResult = 0;

  if (iPos < 1 || iPos > 32)
  {
    cout << "Invalid position\n";
    return false;
  }

  iMask = iMask << (iPos - 1);
  iResult = iNo & iMask;

  return (iResult == iMask);
}

int main()
{
  UINT iValue = 0, iLocation = 0;
  bool bRet = false;

  cout << "Enter number : \n";
  cin >> iValue;

  cout << "Enter the position : \n";
  cin >> iLocation;

  bRet = CheckBit(iValue, iLocation);

  if (bRet == true)
  {
    cout << "Bit is ON at position " << iLocation << "\n";
  }
  else
  {
    cout << "Bit is OFF at position " << iLocation << "\n";
  }

  return 0;
}
