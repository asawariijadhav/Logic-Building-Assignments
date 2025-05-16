/*

4. Write a program which accept number from user and print odd numbers up to that number.

Input: 13
Output: 1 3 5 7 9 11 13

Time Complexity: O(n)

*/

#include <stdio.h>

void OddDisplay(int iNo)
{
  int i = 0;
  for (i = 1; i <= iNo; i++)
  {
    if (i % 2 != 0)
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

  OddDisplay(iValue);

  return 0;
}
