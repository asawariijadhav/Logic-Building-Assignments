///////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.cpp
//  Description : Find min value from array using C++ templates
//  Problem     : Write a generic program to return the smallest value from N elements.
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
  T min = arr[0];
  for (int i = 1; i < iSize; i++)
  {
    if (arr[i] < min)
      min = arr[i];
  }
  return min;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  float brr[] = {10.0f, 0.3f, 7.9f, 8.7f};

  int iRet = Min(arr, 5);
  cout << "Min (int array): " << iRet << endl;

  float fRet = Min(brr, 4);
  cout << "Min (float array): " << fRet << endl;

  return 0;
}
