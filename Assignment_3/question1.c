// Write a program which accept one number from user and print that number of even numbers on screen.

#include <stdio.h>

void PrintEven(int iNo)
{
  int i = 1;

  if (iNo <= 0)
  {
    printf("Please enter a positive number.\n");
    return;
  }

  while (i <= iNo)
  {
    printf("%d ", i * 2); // even numbers: 2, 4, 6, ...
    i++;
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
