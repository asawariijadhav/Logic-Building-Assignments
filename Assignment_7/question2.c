/*

2. Accept amount in US dollars and return its corresponding value in Indian currency. (1 USD = 70 INR)


Input: 10
Value in INR is: 700

Time Complexity: O(1)


*/

#include <stdio.h>

int DollarToINR(int iNo)
{
  return iNo * 70;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the number of USD:\n");
  scanf("%d", &iValue);

  iRet = DollarToINR(iValue);
  printf("Value in INR is: %d\n", iRet);

  return 0;
}
