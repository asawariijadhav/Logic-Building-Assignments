/*

4. Write a program which accepts number from user and displays its table.

Input: 5
Output:

5 10 15 20 25 30 35 40 45 50

Time Complexity:O(1) – O(n) – One loop from 1 to n.

*/

#include <stdio.h>

void Table(int iNo)
{
  int i = 0;
  for (i = 1; i <= 10; i++)
  {
    printf("%d ", iNo * i);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Table(iValue);

  return 0;
}
