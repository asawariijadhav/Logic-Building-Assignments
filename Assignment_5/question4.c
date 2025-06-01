/*

4. Write a program which accept number from user and print odd numbers up to that number.

Input: 13
Output: 1 3 5 7 9 11 13

Time Complexity: O(n)

*/

#include <stdio.h>

void OddDisplay(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 != 0)
    {
      printf("%d ", iCnt);
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
