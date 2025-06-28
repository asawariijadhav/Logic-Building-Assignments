/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Print "Hello" if number < 10, otherwise print "Demo".
//  Problem     : Accept one number from user.
//                If number is less than 10 then print "Hello" else print "Demo".
//
//                Input  : 7
//                Output : Hello
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  if (iNo < 10)
  {
    printf("Hello");
  }
  else
  {
    printf("Demo");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
