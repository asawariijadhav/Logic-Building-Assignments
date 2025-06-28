///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.cpp
//  Description : Multiply two values using C++ templates
//  Problem     : Write a generic program to multiply two numbers.
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;
    return ans;
}

int main()
{
    int iRet = Multiply(10, 20);
    cout << "Multiplication (int): " << iRet << endl;

    float fRet = Multiply(10.0f, 20.0f);
    cout << "Multiplication (float): " << fRet << endl;

    return 0;
}
