///////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Return smallest element from singly linear linked list.
//  Problem     : Write a program which returns the smallest element
//                from singly linear linked list.
//
//                Input  : 110 -> 230 -> 20 -> 240 -> 640
//                Output : 20
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
///////////////////////////////////////////////////////////////////////////

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

// Function to find the smallest element in the list
int Minimum(PNODE Head)
{
  if (Head == NULL)
  {
    return -1;
  }

  int iMin = Head->Data;

  while (Head != NULL)
  {
    if (Head->Data < iMin)
    {
      iMin = Head->Data;
    }
    Head = Head->Next;
  }

  return iMin;
}

int main()
{
  PNODE First = NULL;
  int iRet = 0;

  // list 110 -> 230 -> 20 -> 240 -> 640
  InsertFirst(&First, 640);
  InsertFirst(&First, 240);
  InsertFirst(&First, 20);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  printf("Linked List:\n");
  Display(First);

  iRet = Minimum(First);
  printf("Minimum element is: %d\n", iRet);

  return 0;
}
