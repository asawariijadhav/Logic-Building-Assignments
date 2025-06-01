/*
4.Accept N numbers from the user and accept Range, Display elements within a given range.
Input 1:N = 6
Start = 60
End = 90
Elements = 85 66 3 76 93 88
Output: 66 76 88

Input 2:N = 6
Start = 30
End = 50
Elements = 85 66 3 76 93 88

Output:


*/

#include <stdio.h>
#include <stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
  int i = 0;
  for (i = 0; i < iLength; i++)
  {
    if (Arr[i] >= iStart && Arr[i] <= iEnd)
    {
      printf("%d ", Arr[i]);
    }
  }
  printf("\n");
}

int main()
{
  int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
  int *p = NULL;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  printf("Enter the starting point: ");
  scanf("%d", &iValue1);

  printf("Enter the ending point: ");
  scanf("%d", &iValue2);

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

  printf("Elements in range [%d, %d]: ", iValue1, iValue2);
  Range(p, iSize, iValue1, iValue2);

  free(p);
  return 0;
}
