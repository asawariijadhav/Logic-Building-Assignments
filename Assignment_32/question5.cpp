/*
5: Write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.

*/

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
