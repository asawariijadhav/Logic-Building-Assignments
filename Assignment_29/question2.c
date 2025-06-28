///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Count number of small characters in the file.
//  Problem     : Write a program which accepts file name from user and counts
//                number of small characters from that file.
//
//                Input  : Demo.txt
//                Output : Number of small characters are 21
//
//  Author      : Asawari Jadhav
//  Date        : 13/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int CountSmall(char FName[])
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
      if (Buffer[i] >= 'a' && Buffer[i] <= 'z')
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

  iRet = CountSmall(FileName);

  if (iRet >= 0)
  {
    printf("Number of Small characters are %d\n", iRet);
  }

  return 0;
}
