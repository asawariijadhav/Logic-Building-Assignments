/*

3. Write a program which accepts distance in kilometer and convert it into meter. (1 KM = 1000 Meter)

Input: Distance = 12

Output:Meter = 12000


Time Complexity: O(1)

*/

#include <stdio.h>

int KMtoMeter(int KM)
{
  return KM * 1000;
}

int main()
{
  int KM = 0;

  printf("Enter distance in KM:\n");
  scanf("%d", &KM);

  int iRet = KMtoMeter(KM);
  printf("Distance in meter is: %d\n", iRet);

  return 0;
}
