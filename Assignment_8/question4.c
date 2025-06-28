/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Convert Fahrenheit to Celsius.
//
//  Problem     : Write a program which accepts temperature in Fahrenheit and convert
//                it into Celsius.(C = (F - 32) * (5/9))
//
//                Input  : Fahrenheit = 111.00
//                Output : Celsius = 43.888889
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

double FhtoCs(float F)
{
  double Celsius = 0.0;
  Celsius = (F - 32) * (5.0 / 9.0);
  return Celsius;
}

int main()
{
  float F = 0.0;
  double dRet = 0.0;

  printf("Enter temperature in Fahrenheit:\n");
  scanf("%f", &F);

  double dRet = FhtoCs(F);
  printf("Temperature in Celsius: %f\n", dRet);

  return 0;
}
