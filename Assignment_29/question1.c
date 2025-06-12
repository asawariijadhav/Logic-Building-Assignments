/*
1.Write a program which accepts file name from user and counts number of capital characters from that file.

Input:
Demo.txt

Output:
Number of capital characters are 23
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int CountCapital(char FName[])
{
  int fd = 0, iRet = 0, iCnt = 0, i = 0;
  char Buffer[BUFFER_SIZE] = {'\0'};

  fd = open(FName, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file.\n");
    return -1;
  }

  while ((iRet = read(fd, Buffer, BUFFER_SIZE)) != 0)
  {
    for (i = 0; i < iRet; i++)
    {
      if (Buffer[i] >= 'A' && Buffer[i] <= 'Z')
      {
        iCnt++;
      }
    }
  }

  close(fd);
  return iCnt;
}

int main()
{
  char FileName[30];
  int iRet = 0;

  printf("Enter file name: ");
  scanf("%s", FileName);

  iRet = CountCapital(FileName);

  if (iRet >= 0)
  {
    printf("Number of Capital characters are %d\n", iRet);
  }

  return 0;
}
