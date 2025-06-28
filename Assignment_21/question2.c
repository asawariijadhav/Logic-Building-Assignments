////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Return the smallest number from the array.
//
//  Problem     : Accept N numbers from user and return the smallest number.
//
//                Input:N = 6
//
//                Elements: 85 66 3 66 93 88
//                Output: 3
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
  int iMin = Arr[0], i = 0;
  for (i = 1; i < iLength; i++)
  {
    if (Arr[i] < iMin)
    {
      iMin = Arr[i];
    }
  }
  return iMin;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  p = (int *)malloc(iSize * sizeof(int));
  if (p == NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  printf("Enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  iRet = Minimum(p, iSize);
  printf("Smallest Number is %d\n", iRet);

  free(p);
  return 0;
}
