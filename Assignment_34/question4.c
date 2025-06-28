
//////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Return largest element from singly linear linked list.
//  Problem     : Write a program which returns the largest element
//                from singly linear linked list.
//
//                Input  : 110 -> 230 -> 320 -> 240
//                Output : 320
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
//////////////////////////////////////////////////////////////////////////

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

void Display(PNODE Head)
{
  while (Head != NULL)
  {
    printf("| %d | -> ", Head->Data);
    Head = Head->Next;
  }
  printf("NULL\n");
}

int Maximum(PNODE Head)
{
  if (Head == NULL)
  {
    return -1;
  }

  int iMax = Head->Data;

  while (Head != NULL)
  {
    if (Head->Data > iMax)
    {
      iMax = Head->Data;
    }
    Head = Head->Next;
  }

  return iMax;
}

int main()
{
  PNODE First = NULL;
  int iRet = 0;

  InsertFirst(&First, 240);
  InsertFirst(&First, 320);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  printf("Linked List:\n");
  Display(First);

  iRet = Maximum(First);
  printf("Maximum element is: %d\n", iRet);

  return 0;
}
