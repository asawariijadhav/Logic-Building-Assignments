/*

2. Write a program which accept number from user and display its factors in decreasing order.

Input:  12
Output: 6   4   3   2   1

Input:  10
Output: 5   2   1

Input:   8
Output: 4   2   1

Time Complexity:
O(n) where n = iNo/2

*/

#include <stdio.h>

void FactRev(int iNo)
{
  int i = 0;

  for (i = iNo / 2; i >= 1; i--)
  {
    if (iNo % i == 0)
    {
      printf("%d  ", i);
    }
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  FactRev(iValue);

  return 0;
}
