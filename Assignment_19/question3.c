////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Check whether any number contains digit 11.
//
//  Problem     : Accept N numbers from user and check whether any number
//                contains digit 11 or not.
//
//  Author      : Asawari Jadhav
//  Date        : 24/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
  int iCnt = 0;
  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == 11)
    {
      return TRUE;
    }
  }
  return FALSE;
}

int main()
{
  int iSize = 0, iCnt = 0;
  BOOL bRet = FALSE;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  p = (int *)malloc(iSize * sizeof(int));
  if (p == NULL)
  {
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  bRet = Check(p, iSize);

  if (bRet == TRUE)
    printf("11 is present\n");
  else
    printf("11 is absent\n");

  free(p);
  return 0;
}
