
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Create a new file.
//  Problem     : Write application which accepts file name from user and creates
//                that file.
//
//                Input  : Demo.txt
//                Output : File created successfully
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

  printf("Enter the file name to create:\n");
  scanf("%s", Fname);

  fd = creat(Fname, 0777);
  if (fd == -1)
  {
    printf("Unable to create file\n");
  }
  else
  {
    printf("File created successfully.\n");
    close(fd);
  }

  return 0;
}
