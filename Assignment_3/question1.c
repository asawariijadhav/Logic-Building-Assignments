// Write a program which accept one number from user and print that number of even numbers on screen.

#include <stdio.h>

void PrintEven(int iNo)
{
  int iCnt = 1;

  if (iNo <= 0)
  {
    printf("Please enter a positive number.\n");
    return;
  }

  while (iCnt <= iNo)
  {
    printf("%d ", iCnt * 2); // even numbers: 2, 4, 6, ...
    iCnt++;
  }

  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  PrintEven(iValue);

  return 0;
}
