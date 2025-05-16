/*

Write a program which accept number and print its multiples of 5 up to that number.

Input: 25
Output: 5 10 15 20 25

Time Complexity: O(n)

*/

#include <stdio.h>

void MultDisplay(int iNo)
{
  int i = 0;
  for (i = 1; i <= iNo; i++)
  {
    if (i % 5 == 0)
    {
      printf("%d ", i);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  MultDisplay(iValue);

  return 0;
}
