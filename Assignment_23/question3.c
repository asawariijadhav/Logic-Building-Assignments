/*
3. Print A-Z from input (if capital) or reverse a-z to input (if small)

*/

#include <stdio.h>

void Display(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    for (char i = ch; i <= 'Z'; i++)
    {
      printf("%c ", i);
    }
    printf("\n");
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    for (char i = ch; i >= 'a'; i--)
    {
      printf("%c ", i);
    }
    printf("\n");
  }
  else
  {
    printf("%c\n", ch);
  }
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}
