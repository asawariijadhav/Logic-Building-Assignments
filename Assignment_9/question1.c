/*

1. Write a program which accepts number from user and display its digits in reverse order.

Time Complexity: O(N) where N is the number of digits

*/

#include <stdio.h>

void DisplayDigit(int iNo)
{
  while (iNo != 0)
  {
    int iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number:\n");
  scanf("%d", &iValue);

  DisplayDigit(iValue);

  return 0;
}
