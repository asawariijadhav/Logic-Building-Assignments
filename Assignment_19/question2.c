////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Return difference between frequency of even and odd numbers.
//
//  Problem     : Accept N numbers from user and return difference between
//                frequency of even and odd numbers.
//
//                Input:N = 7
//
//                Elements: 85 66 3 80 93 88 90
//                Output: 1  (4 - 3)
//
//  Author      : Asawari Jadhav
//  Date        : 24/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int FrequencyDiff(int Arr[], int iLength)
{
  int iCnt = 0, EvenCount = 0, OddCount = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] % 2 == 0)
      EvenCount++;
    else
      OddCount++;
  }

  return EvenCount - OddCount;
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
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  iRet = FrequencyDiff(p, iSize);
  printf("Result is %d\n", iRet);

  free(p);
  return 0;
}
