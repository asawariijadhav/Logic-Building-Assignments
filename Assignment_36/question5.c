///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display largest digit of each element from linked list.
//  Problem     : Write a program which displays largest digit from each node.
//                Input  : 111 -> 250 -> 532 -> 419
//                Output : 1 5 5 9
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////////////

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

void DisplayLarge(PNODE Head)
{
  int num, digit, max;

  while (Head != NULL)
  {
    num = Head->Data;
    max = 0;

    while (num > 0)
    {
      digit = num % 10;
      if (digit > max)
      {
        max = digit;
      }
      num /= 10;
    }

    printf("%d ", max);
    Head = Head->Next;
  }
  printf("\n");
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 419);
  InsertFirst(&First, 532);
  InsertFirst(&First, 250);
  InsertFirst(&First, 111);

  DisplayLarge(First);

  return 0;
}
