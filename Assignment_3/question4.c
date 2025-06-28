////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Convert case of given character.
//  Problem     : Accept one character from user and convert case of that character.
//
//                Input  : 'A'
//                Output : 'a'
//
//  Author      : Asawari Jadhav
//  Date        : 10/05/2025
//
//////////////////////////////////////////////////////////////////////////////////

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
