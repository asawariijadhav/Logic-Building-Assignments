/*
2. Toggle case: if small → capital, if capital → small, else as is
*/

#include <stdio.h>

void Display(char ch)
{
  if ((ch >= 'a') && (ch <= 'z'))

    printf("%c\n", ch - ('a' - 'A'));

  else if ((ch >= 'A') && (ch <= 'Z'))

    printf("%c\n", ch + ('a' - 'A'));

  else
    printf("%c\n", ch);
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}
