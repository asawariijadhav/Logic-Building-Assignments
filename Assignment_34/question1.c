////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Search first occurrence of a particular element in singly linear linked list.
//  Problem     : Write a program which searches first occurrence of a particular element
//                from singly linear linked list. Return the position.
//
//                Input  : 10 -> 20 -> 30 -> 40 -> 30 -> 50 -> 70
//                Element to search : 30
//                Output : 3
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int Data;
  struct node *Next;
} NODE, *PNODE, **PPNODE;

// Function to insert node at the beginning
void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn->Data = no;
  newn->Next = *Head;
  *Head = newn;
}

// Function to search first occurrence of a given element
int SearchFirstOcc(PNODE Head, int no)
{
  int iPos = 1;
  while (Head != NULL)
  {
    if (Head->Data == no)
    {
      return iPos;
    }
    Head = Head->Next;
    iPos++;
  }
  return -1; // Element not found
}

// Function to display linked list
void Display(PNODE Head)
{
  while (Head != NULL)
  {
    printf("| %d | -> ", Head->Data);
    Head = Head->Next;
  }
  printf("NULL\n");
}

int main()
{
  PNODE First = NULL;
  int iNo = 30;
  int iRet = 0;

  // list: 10 -> 20 -> 30 -> 40 -> 30 -> 50 -> 70
  InsertFirst(&First, 70);
  InsertFirst(&First, 50);
  InsertFirst(&First, 30);
  InsertFirst(&First, 40);
  InsertFirst(&First, 30);
  InsertFirst(&First, 20);
  InsertFirst(&First, 10);

  printf("Linked List: \n");
  Display(First);

  iRet = SearchFirstOcc(First, iNo);
  if (iRet != -1)
  {
    printf("First occurrence of element %d is at position: %d\n", iNo, iRet);
  }
  else
  {
    printf("Element %d not found in the linked list.\n", iNo);
  }

  return 0;
}
