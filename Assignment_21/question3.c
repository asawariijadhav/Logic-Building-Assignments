////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Return difference between largest and smallest numbers.
//
//  Problem     : Accept N numbers from user and return the difference between
//                largest and smallest number.
//
//                Input: N = 6
//
//                Elements: 85 66 3 66 93 88
//                Output: 90 (93 - 3)
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Difference(int Arr[], int iLength)
{
  int iMax = Arr[0], iMin = Arr[0], i = 0;

  for (i = 1; i < iLength; i++)
  {
    if (Arr[i] > iMax)

      iMax = Arr[i];

    if (Arr[i] < iMin)

      iMin = Arr[i];
  }

  return iMax - iMin;
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

  iRet = Difference(p, iSize);
  printf("Difference is %d\n", iRet);

  free(p);
  return 0;
}
