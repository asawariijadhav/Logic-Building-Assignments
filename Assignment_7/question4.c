/*

4. Write a program to find odd factorial of given number.

Input: 5
Output: 15  (5 * 3 * 1)

Time Complexity: O(n)

*/

#include <stdio.h>

int OddFactorial(int iNo)
{
  int iFact = 1;
  for (int i = 1; i <= iNo; i++)
  {
    if (i % 2 != 0)
    {
      iFact *= i;
    }
  }
  return iFact;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number:\n");
  scanf("%d", &iValue);

  iRet = OddFactorial(iValue);
  printf("Odd factorial of number is: %d\n", iRet);

  return 0;
}
