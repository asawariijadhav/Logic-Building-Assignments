
///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Append string to end of file.
//  Problem     : Write application which accepts file name from user and one
//                string from user. Write that string at the end of file.
//
//                Input  : Demo.txt, Hello World
//                Output : Write Hello World at the end of Demo.txt file
//
//  Author      : Asawari Jadhav
//  Date        : 13/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
  int fd = 0;
  char Fname[20] = {'\0'};
  char Data[100] = {'\0'};

  printf("Enter the file name to append to:\n");
  scanf("%s", Fname);

  printf("Enter the string to write at end of file:\n");
  scanf(" %[^\n]s", Data);

  fd = open(Fname, O_WRONLY | O_APPEND);
  if (fd == -1)
  {
    printf("Unable to open file\n");
    return -1;
  }

  write(fd, Data, strlen(Data));
  write(fd, "\n", 1);

  printf("Write '%s' at the end of %s file\n", Data, Fname);
  close(fd);

  return 0;
}
