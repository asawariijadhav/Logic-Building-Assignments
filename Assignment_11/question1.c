////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display pattern of alphabets up to given number.
//
//  Problem     : Accept number from user and display pattern: A B C D E
//
//  Author      : Asawari Jadhav
//  Date        : 20/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  char ch = 'A';

  for (iCnt = 0; iCnt < iNo; iCnt++)
  {
    printf("%c\t", ch);
    ch++; // Move to next character
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number of elements\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}
