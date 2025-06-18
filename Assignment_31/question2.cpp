/*
2. Write a program which accept one number from user and off 7th & 10th bit of that number if it is on. Return modified number.
Input : 577
Output : 1
*/

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
  UINT iMask1 = 1, iMask2 = 1;
  UINT iResult = 0;

  iMask1 = iMask1 << 6; // 7th bit
  iMask2 = iMask2 << 9; // 10th bit

  iMask1 = ~iMask1;
  iMask2 = ~iMask2;

  iResult = iNo & iMask1;
  iResult = iResult & iMask2;

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
