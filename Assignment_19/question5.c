////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Return frequency of a given number.
//
//  Problem     : Accept N numbers and one additional number from user.
//                Return the frequency of that number.
//
//  Author      : Asawari Jadhav
//  Date        : 24/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
  int iCnt = 0, iCount = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == iNo)
    {
      iCount++;
    }
  }
  return iCount;
}

int main()
{
  int iSize = 0, iValue = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  printf("Enter the number to find frequency: ");
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

  iRet = Frequency(p, iSize, iValue);
  printf("%d\n", iRet);

  free(p);
  return 0;
}
