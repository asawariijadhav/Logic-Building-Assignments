/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Check range of number and print Small/Medium/Large.
//
//  Problem     : Write a program which accepts number from user and:
//                  If number is less than 50 then print “Small”
//                  If number is greater than 50 and less than 100 then print “Medium”
//                  If it is greater than 100 then print “Large”
//
//                Input  : 75
//                Output : Medium
//
//  Author      : Asawari Jadhav
//  Date        : 17/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////





#include <stdio.h>

void Number(int iNo)
{
  if (iNo < 50)
  {
    printf("Small\n");
  }
  else if (iNo >= 50 && iNo <= 100)
  {
    printf("Medium\n");
  }
  else
  {
    printf("Large\n");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Number(iValue);

  return 0;
}
