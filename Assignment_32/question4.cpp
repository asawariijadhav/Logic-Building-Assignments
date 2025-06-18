/*
4: Write a program which accept one number and position fro user and toggle that bit.Return modified number.
Input: 10 3 → Output: 14
*/

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
  UINT iMask = 1;
  UINT iResult = 0;

  if (iPos < 1 || iPos > 32)
  {
    cout << "Invalid position\n";
    return iNo;
  }

  iMask = iMask << (iPos - 1);
  iResult = iNo ^ iMask;

  return iResult;
}

int main()
{
  UINT iValue = 0, iLocation = 0, iRet = 0;

  cout << "Enter number : \n";
  cin >> iValue;

  cout << "Enter the position : \n";
  cin >> iLocation;

  iRet = ToggleBit(iValue, iLocation);

  cout << "Updated number is : " << iRet << "\n";

  return 0;
}
