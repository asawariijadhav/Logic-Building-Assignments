/*
2. Write a program which accepts string from user and a character. Return frequency of that character.
Input:
"Marvellous Multi OS"
M

Output:
2

Input:
"Marvellous Multi OS"
W

Output:
0


*/

#include <stdio.h>

int CountChar(char *str, char ch)
{
  int iCnt = 0;

  while (*str != '\0')
  {
    if (*str == ch)
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{
  char arr[50];
  char cValue;
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  getchar(); // to consume newline left in buffer

  printf("Enter the character: ");
  scanf("%c", &cValue);

  iRet = CountChar(arr, cValue);

  printf("Character frequency is %d\n", iRet);

  return 0;
}
