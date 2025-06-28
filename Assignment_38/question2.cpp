///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.cpp
//  Description : Find max of 3 numbers using C++ templates
//  Problem     : Write a generic program to find the largest number from three numbers.
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
  T max = no1;
  if (no2 > max)
  {
    max = no2;
  }
  if (no3 > max)
  {
    max = no3;
  }

  return max;
}

int main()
{
  int iRet = Max(11, 78, 44);
  cout << "Max of 3 ints: " << iRet << endl;

  float fRet = Max(11.2f, 7.8f, 9.1f);
  cout << "Max of 3 floats: " << fRet << endl;

  return 0;
}
