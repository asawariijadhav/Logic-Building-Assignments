///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Count number of white space characters in the file.
//  Problem     : Write a program which accepts file name from user and counts 
//                number of white spaces from that file.
//
//                Input  : Demo.txt
//                Output : Number of white spaces are 13
//
//  Author      : Asawari Jadhav
//  Date        : 13/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int CountWhite(char FName[])
{
  int fd = 0, iRet = 0, iCnt = 0, iWhiteCnt = 0;
  char Buffer[BUFFER_SIZE] = {'\0'};

  fd = open(FName, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file.\n");
    return -1;
  }

  while ((iRet = read(fd, Buffer, BUFFER_SIZE)) > 0)
  {
    for (iCnt = 0; iCnt < iRet; iCnt++)
    {
      if (Buffer[iCnt] == ' ')
      {
        iWhiteCnt++;
      }
    }
  }

  close(fd);
  return iWhiteCnt;
}

int main()
{
  char FileName[30];
  int iRet = 0;

  printf("Enter file name: ");
  scanf("%s", FileName);

  iRet = CountWhite(FileName);

  printf("Number of white spaces are %d\n", iRet);

  return 0;
}
