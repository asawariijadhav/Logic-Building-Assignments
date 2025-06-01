/*
2: Copy first N characters (strncpy implementation)

Input:"Marvellous Multi OS", 10

Output:Marvellous

*/

#include <stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
  if (src == NULL || dest == NULL || iCnt <= 0)
    return;

  while ((*src != '\0') && (iCnt != 0))
  {
    *dest = *src;
    src++;
    dest++;
    iCnt--;
  }

  *dest = '\0';
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30];

  StrNCpyX(arr, brr, 10);

  printf("Copied First 10 Characters: %s\n", brr);

  return 0;
}
