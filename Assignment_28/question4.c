/*
4. Write application which accepts file name from user and displays size of file.
Input: Demo.txt
Output: File size is 56 bytes
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
  struct stat sobj;
  char Fname[20] = {'\0'};

  printf("Enter the file name to check size:\n");
  scanf("%s", Fname);

  if (stat(Fname, &sobj) == -1)
  {
    printf("Unable to get file information.\n");
    return -1;
  }

  printf("File size is %ld bytes\n", sobj.st_size);
  return 0;
}
