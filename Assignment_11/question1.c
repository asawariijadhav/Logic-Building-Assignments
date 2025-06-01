/*

1. Accept number from user and display below pattern.

Input: 5
Output:A    B    C    D    E

*/

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  char ch = 'A';

  for (iCnt = 0; iCnt < iNo; iCnt++)
  {
    printf("%c\t", ch);
    ch++; // Move to next character
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number of elements\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}
