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
  int i = 0;
  int iFact = 1;

  for (i = 1; i <= iNo; i++)
  {
    iFact = iFact * i;
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
