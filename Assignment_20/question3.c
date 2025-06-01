/*
3.Accept N numbers from the user and accept one number as NO. Return the index of the last occurrence of that NO.
Input:N: 6
NO: 66
Elements: 85 66 3 66 93 88
Output: Last occurrence of number is 3

Input:N:  6
NO: 93
Elements: 85 66 3 66 93 88
Output: There is no such number


*/

#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
  int i = 0;
  int iPos = -1;

  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] == iNo)
    {
      iPos = i;
    }
  }

  return iPos;
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0, iValue = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  printf("Enter the number to search: ");
  scanf("%d", &iValue);

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

  iRet = LastOcc(p, iSize, iValue);

  if (iRet == -1)
  {
    printf("There is no such number\n");
  }
  else
  {
    printf("Last occurrence of number is %d\n", iRet);
  }

  free(p);
  return 0;
}
