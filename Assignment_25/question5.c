/*
5: Count Number of White Spaces
Input 1: "MarvellouS" → Output: 0
Input 2: "Marvellous Infosystems" → Output: 1
Input 3: "Marvellous Infosystems by Piyush Manohar Khairnnar" → Output: 5

*/

#include <stdio.h>

int CountWhite(char *str)
{
  int iCnt = 0;

  while (*str != '\0')
  {
    if (*str == ' ')
    {
      iCnt++;
    }
    str++;
  }

  return iCnt;
}

int main()
{
  char arr[100];
  int iRet = 0;

  printf("Enter string: ");
  scanf("%[^\n]s", arr);

  iRet = CountWhite(arr);

  printf("%d\n", iRet);

  return 0;
}
