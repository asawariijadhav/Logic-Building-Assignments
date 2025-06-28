///////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display all prime elements from singly linear linked list.
//  Problem     : Write a program which displays all elements which are prime
//                from singly linear linked list.
//
//                Input  : 11 -> 20 -> 17 -> 41 -> 22 -> 89
//                Output : 11 17 41 89
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
/////////////////////////////////////////////////////////////////////////////

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

int IsPrime(int no)
{
  if (no < 2)
    return 0;
  for (int i = 2; i <= no / 2; i++)
  {
    if (no % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

void DisplayPrime(PNODE Head)
{
  while (Head != NULL)
  {
    if (IsPrime(Head->Data))
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
  InsertFirst(&First, 22);
  InsertFirst(&First, 41);
  InsertFirst(&First, 17);
  InsertFirst(&First, 20);
  InsertFirst(&First, 11);

  printf("Prime elements in the linked list are: ");
  DisplayPrime(First);

  return 0;
}
