/*

2. Write a program which accept number from user and print numbers till that number.

Input: 8
Output: 1 2 3 4 5 6 7 8

Time Complexity: O(n)

*/

#include <stdio.h>

void Display(int iNo)
{
  int i = 0;
  for (i = 1; i <= iNo; i++)
  {
    printf("%d ", i);
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
