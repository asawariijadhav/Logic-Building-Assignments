//Accept one character from user and convert case of that character.

#include <stdio.h>

void DisplayConvert(char CValue)
{
  if (CValue >= 'a' && CValue <= 'z')
  {
    printf("Converted character: %c\n", CValue - 32); // Convert to uppercase
  }
  else if (CValue >= 'A' && CValue <= 'Z')
  {
    printf("Converted character: %c\n", CValue + 32); // Convert to lowercase
  }
  else
  {
    printf("Invalid character.\n");
  }
}

int main()
{
  char cValue = '\0';

  printf("Enter a character: ");
  scanf(" %c", &cValue); // Space before %c to skip any leftover newline

  DisplayConvert(cValue);

  return 0;
}
