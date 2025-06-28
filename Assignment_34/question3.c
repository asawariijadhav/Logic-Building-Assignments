///////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Return addition of all elements from singly linear linked list.
//  Problem     : Write a program which returns addition of all elements
//                from singly linear linked list.
//
//                Input  : 10 -> 20 -> 30 -> 40
//                Output : 100
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
//////////////////////////////////////////////////////////////////////////////////

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

int Addition(PNODE Head)
{
  int iSum = 0;
  while (Head != NULL)
  {
    iSum += Head->Data;
    Head = Head->Next;
  }
  return iSum;
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 40);
  InsertFirst(&First, 30);
  InsertFirst(&First, 20);
  InsertFirst(&First, 10);

  printf("Linked List:\n");
  Display(First);

  int iRet = Addition(First);
  printf("Addition of all elements is: %d\n", iRet);

  return 0;
}
