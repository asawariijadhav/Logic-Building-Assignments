///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Open file in read mode.
//  Problem     : Write application which accepts file name from user and open
//                that file in read mode.
//
//                Input  : Demo.txt
//                Output : File opened successfully
//
//  Author      : Asawari Jadhav
//  Date        : 13/06/2025
//
///////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd = 0;
  char Fname[20] = {'\0'};

  printf("Enter the file name to open:\n");
  scanf("%s", Fname);

  fd = open(Fname, O_RDONLY);
  if (fd == -1)
  {
    printf("Unable to open file\n");
  }
  else
  {
    printf("File opened successfully.\n");
    close(fd);
  }

  return 0;
}
