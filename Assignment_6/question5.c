/*

5. Write a program which accepts number from user and displays its table in reverse.

Input: 2
Output:

20 18 16 14 12 10 8 6 4 2


Time Complexity:O(1) – O(1) – Fixed 10 iterations.

*/

#include <stdio.h>

void TableRev(int iNo)
{
  int i = 0;
  for (i = 10; i >= 1; i--)
  {
    printf("%d ", iNo * i);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  TableRev(iValue);

  return 0;
}
