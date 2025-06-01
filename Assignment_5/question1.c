/*

1. Write a program which accept number from user and print that number of * on screen.

Input: 5
Output: * * * * *

Input: 3
Output: * * *

Input: -3
Output: * * *

Time Complexity: O(n)

*/

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("* ");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}
