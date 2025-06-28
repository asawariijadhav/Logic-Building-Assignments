///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Display smallest digit of each element from linked list.
//  Problem     : Write a program which displays smallest digit from each node.
//                Input  : 111 -> 250 -> 532 -> 415
//                Output : 1 0 2 1
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

void DisplaySmall(PNODE Head)
{
  int num, digit, min;

  while (Head != NULL)
  {
    num = Head->Data;
    min = 9;

    while (num > 0)
    {
      digit = num % 10;
      if (digit < min)
      {
        min = digit;
      }
      num /= 10;
    }

    printf("%d ", min);
    Head = Head->Next;
  }
  printf("\n");
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 415);
  InsertFirst(&First, 532);
  InsertFirst(&First, 250);
  InsertFirst(&First, 111);

  DisplaySmall(First);

  return 0;
}
