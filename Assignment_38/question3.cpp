///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question.cpp
//  Description : Sum of N elements using C++ templates
//  Problem     : Write a generic program to accept N values and return their sum.
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
  T sum = 0;
  for (int i = 0; i < iSize; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  float brr[] = {10.0f, 0.3f, 7.9f, 8.8f};

  int iSum = AddN(arr, 5);
  cout << "Sum of integers: " << iSum << endl;

  float fSum = AddN(brr, 4);
  cout << "Sum of floats: " << fSum << endl;

  return 0;
}
