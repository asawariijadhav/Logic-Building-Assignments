/*
4. Write a program to return index of last occurrence of a character

Input :"Marvellous Multi OS", 'M'


Output :11
*/

#include <stdio.h>

int LastChar(char *str, char ch)
{
  int i = 0;
  int pos = -1;

  while (str[i] != '\0')
  {
    if (str[i] == ch)
    {
      pos = i;
    }
    i++;
  }

  return pos;
}

int main()
{
  char arr[50];
  char cValue;
  int iRet = 0;

  printf("Enter string: ");
  scanf(" %[^\n]s", arr);

  printf("Enter the character: ");
  scanf(" %c", &cValue);

  iRet = LastChar(arr, cValue);

  if (iRet != -1)
    printf("Character location is %d\n", iRet);
  else
    printf("Character not found\n");

  return 0;
}
