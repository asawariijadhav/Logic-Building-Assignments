//////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.cpp
//  Description : Count number of ON (1) bits in a number without using % or / operator.
//  Problem     : Write a program which accepts one number from user and
//                counts the number of ON (1) bits in it without using
//                modulus (%) or division (/) operator.
//
//                Input  : 11
//                Output : 3
//
//  Author      : Asawari Jadhav
//  Date        : 18/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
  int iCount = 0;

  while (iNo != 0)
  {
    if ((iNo & 1) == 1)
    {
      iCount++;
    }
    iNo = iNo >> 1;
  }

  return iCount;
}

int main()
{
  UINT iValue = 0;
  int iRet = 0;

  cout << "Enter number : \n";
  cin >> iValue;

  iRet = CountOne(iValue);

  cout << "Number of ON bits are : " << iRet << "\n";

  return 0;
}
