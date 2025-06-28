//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : program3_SearchFirstTemplate.cpp
//  Description : First occurrence of value
//  Problem     : Write generic program to accept N values and search first occurrence of any specific
//                value.
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
  for (int i = 0; i < iSize; i++)
  {
    if (arr[i] == iNo)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
  int iRet = SearchFirst(arr, 9, 40);
  printf("%d\n", iRet); // 6
  return 0;
}
