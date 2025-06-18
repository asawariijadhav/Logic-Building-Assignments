/*
1. Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.
Input : 79
Output : 15
*/

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
