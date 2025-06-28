/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.cpp
//  Description : Display value N times
//  Problem     : Write generic program which accept one value and one number from user. Print that
//                value that number of times on screen.
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
  for (int i = 0; i < iSize; i++)
  {
    cout << value << " ";
  }
  cout << "\n";
}

int main()
{
  Display('M', 7);
  Display(11, 3);
  Display(3.7, 6);
  return 0;
}
