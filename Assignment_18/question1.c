////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Return difference between summation of even and odd elements.
//
//  Problem     : Accept N numbers from user and return the difference between
//                the summation of even elements and summation of odd elements.
//
//                Input: N = 6
//
//                Elements: 85 66 3 80 93 88
//                Output: 53  (234 - 181)
//
//  Author      : Asawari Jadhav
//  Date        : 24/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
  int iCnt = 0;
  int iEvenSum = 0;
  int iOddSum = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] % 2 == 0)
    {
      iEvenSum = iEvenSum + Arr[iCnt];
    }
    else
    {
      iOddSum = iOddSum + Arr[iCnt];
    }
  }

  return iEvenSum - iOddSum;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  if (iSize <= 0)
  {
    printf("Invalid size.\n");
    return -1;
  }

  p = (int *)malloc(iSize * sizeof(int));

  if (p == NULL)
  {
    printf("Unable to allocate memory.\n");
    return -1;
  }

  printf("Enter %d elements:\n", iSize);
  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element %d: ", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  iRet = Difference(p, iSize);
  printf("Result is: %d\n", iRet);

  free(p);
  return 0;
}
