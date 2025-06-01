/*
1. Display ASCII table (0 to 255) with Decimal, Hex, Octal, and Symbol

*/

#include <stdio.h>

void DisplayASCII()
{
  int i = 0;

  printf("Decimal\tHex\tOctal\tCharacter\n");
  for (int i = 0; i <= 255; i++)
  {
    printf("%d\t%X\t%o\t%c\n", i, i, i, i);
  }
}

int main()
{
  DisplayASCII();
  return 0;
}
