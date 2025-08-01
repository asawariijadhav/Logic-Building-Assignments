////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Return a number if it is present in the array.
//
//  Problem     : Accept N numbers from the user and accept one another number
//                as NO. Check whether NO is present or not.
//
//                Input: N = 6
//
//                Elements: 85 66 3 66 93 88
//                Output: 93
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
  int iMax = Arr[0], i = 0;
  for (i = 1; i < iLength; i++)
  {
    if (Arr[i] > iMax)
    {
      iMax = Arr[i];
    }
  }
  return iMax;
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

  iRet = Maximum(p, iSize);
  printf("Largest Number is %d\n", iRet);

  free(p);
  return 0;
}
