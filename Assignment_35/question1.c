////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Display all perfect elements from singly linear linked list.
//  Problem     : Write a program which displays all elements which are perfect
//                from singly linear linked list.
//
//                Input  : 11 -> 28 -> 17 -> 41 -> 6 -> 89
//                Output : 6 28
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

int IsPerfect(int no)
{
  int iSum = 0;
  for (int i = 1; i <= no / 2; i++)
  {
    if (no % i == 0)
    {
      iSum += i;
    }
  }
  return (iSum == no);
}

void DisplayPerfect(PNODE Head)
{
  while (Head != NULL)
  {
    if (IsPerfect(Head->Data))
    {
      printf("%d ", Head->Data);
    }
    Head = Head->Next;
  }
  printf("\n");
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 89);
  InsertFirst(&First, 6);
  InsertFirst(&First, 41);
  InsertFirst(&First, 17);
  InsertFirst(&First, 28);
  InsertFirst(&First, 11);

  printf("Perfect elements in the linked list are: ");
  DisplayPerfect(First);

  return 0;
}
