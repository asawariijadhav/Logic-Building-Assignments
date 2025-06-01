/*
3. Write a program which accepts string from user and toggles the case.
Input:
"Marvellous Multi OS"
Output:
"mARVELLOUS mULTI os"

*/

#include <stdio.h>

void strtogglex(char *str)
{
  while (*str != '\0')
  {
    if ((*str >= 'A') && (*str <= 'Z'))
    {
      *str = *str + ('a' - 'A'); // Uppercase to lowercase
    }
    else if ((*str >= 'a') && (*str <= 'z'))
    {
      *str = *str - ('a' - 'A'); // Lowercase to uppercase
    }
    str++;
  }
}

int main()
{
  char arr[20];

  printf("Enter string: ");
  scanf("%[^'\n']s", arr);

  strtogglex(arr);

  printf("Modified string is %s\n", arr);

  return 0;
}
