/*

1. Write a program which accepts number from user and displays below pattern.

Input: 5
Output: * * * * *

Time Complexity: O(n)

*/

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("*\t");
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number:\n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
