////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Check whether a given number is present in the array.
//
//  Problem     : Accept N numbers from the user and accept one another number
//                as NO. Check whether NO is present or not.
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
  int i = 0;
  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] == iNo)
    {
      return TRUE;
    }
  }
  return FALSE;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
  int *p = NULL;
  BOOL bRet = FALSE;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  printf("Enter the number to search: ");
  scanf("%d", &iValue);

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

  bRet = Check(p, iSize, iValue);

  if (bRet == TRUE)
  {
    printf("Number is present\n");
  }
  else
  {
    printf("Number is not present\n");
  }

  free(p);
  return 0;
}
