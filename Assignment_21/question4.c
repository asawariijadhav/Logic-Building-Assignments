////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display numbers which have exactly 3 digits.
//
//  Problem     : Accept N numbers from user and display all such numbers
//                which contain 3 digits.
//
//                Input: N = 6
//
//                Elements: 8225 665 3 76 953 858
//                Output: 665 953 858
//
//  Author      : Asawari Jadhav
//  Date        : 26/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Digits(int Arr[], int iLength)
{
  int i = 0;
  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] >= 100 && Arr[i] <= 999)
    {
      printf("%d ", Arr[i]);
    }
  }
  printf("\n");
}

int main()
{
  int iSize = 0, iCnt = 0;
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

  Digits(p, iSize);

  free(p);
  return 0;
}
