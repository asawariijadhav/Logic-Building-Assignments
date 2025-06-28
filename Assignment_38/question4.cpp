///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.cpp
//  Description : Find max value from array using C++ templates
//  Problem     : Write a generic program to return the largest value from N elements.
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
  T max = arr[0];
  for (int i = 1; i < iSize; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  float brr[] = {10.0f, 0.3f, 7.9f, 9.8f};

  int iRet = Max(arr, 5);
  cout << "Max (int array): " << iRet << endl;

  float fRet = Max(brr, 4);
  cout << "Max (float array): " << fRet << endl;

  return 0;
}
