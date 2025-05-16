/*

1. Write a program which accepts number from user and displays below pattern.

Input: 5
Output: * * * * *

Time Complexity: O(n)

*/

#include <stdio.h>

void Display(int iNo)
{
  for (int i = 1; i <= iNo; i++)
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
