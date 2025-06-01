/*

3. Write a program which finds factorial of given number.

Input 1: 5
Output 1: 120

(Factorial: 5 × 4 × 3 × 2 × 1 = 120)

Time Complexity:O(1) – O(n) – One loop from 1 to n.

*/

#include <stdio.h>

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFact = 1;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFact = iFact * iCnt;
  }

  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Factorial(iValue);
  printf("Factorial of number is %d\n", iRet);

  return 0;
}
