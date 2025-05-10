// Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.

#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
  if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
      ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter a character: ");
  scanf(" %c", &cValue);

  bRet = ChkVowel(cValue);

  if (bRet == TRUE)
  {
    printf("It is vowel\n");
  }
  else
  {
    printf("It is not vowel\n");
  }

  return 0;
}
