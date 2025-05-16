/*

3. Write a program which accept number from user and print even numbers till that number.

Input: 8
Output: 2 4 6 8

Time Complexity: O(n)

*/

#include <stdio.h>

void DisplayEven(int iNo)
{
  int i = 0;
  for (i = 1; i <= iNo; i++)
  {
    if (i % 2 == 0)
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

  DisplayEven(iValue);

  return 0;
}
