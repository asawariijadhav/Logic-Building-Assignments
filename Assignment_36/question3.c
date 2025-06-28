///////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Display product of digits of each element from linked list (excluding 0).
//  Problem     : Write a program which displays product of digits from each node,
//                excluding 0 digits.
//                Input  : 111 -> 20 -> 32 -> 41
//                Output : 1 2 6 4
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int Data;
  struct node *Next;
} NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn->Data = no;
  newn->Next = *Head;
  *Head = newn;
}

void DisplayProduct(PNODE Head)
{
  int num, prod, digit;

  while (Head != NULL)
  {
    num = Head->Data;
    prod = 1;

    while (num > 0)
    {
      digit = num % 10;
      if (digit != 0)
      {
        prod *= digit;
      }
      num /= 10;
    }

    printf("%d ", prod);
    Head = Head->Next;
  }
  printf("\n");
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 41);
  InsertFirst(&First, 32);
  InsertFirst(&First, 20);
  InsertFirst(&First, 111);

  DisplayProduct(First);

  return 0;
}
