// Write a program which accept one number from user and print even factors of that number.

#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
  int i = 0;

  if (iNo <= 0)
  {
    iNo = -iNo;
  }

  for (i = 1; i < iNo; i++) // strictly less than iNo to exclude the number itself
  {
    if ((iNo % i == 0) && (i % 2 == 0))
    {
      printf("%d ", i);
    }
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  printf("Even factors (excluding the number) are: ");
  DisplayEvenFactor(iValue);

  return 0;
}
