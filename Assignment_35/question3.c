////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question3.c
//  Description : Return addition of all even elements from singly linear linked list.
//  Problem     : Write a program which returns addition of all even elements
//                from singly linear linked list.
//
//                Input  : 11 -> 20 -> 32 -> 41
//                Output : 52
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////

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

int AdditionEven(PNODE Head)
{
  int iSum = 0;
  while (Head != NULL)
  {
    if (Head->Data % 2 == 0)
    {
      iSum += Head->Data;
    }
    Head = Head->Next;
  }
  return iSum;
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 41);
  InsertFirst(&First, 32);
  InsertFirst(&First, 20);
  InsertFirst(&First, 11);

  int iRet = AdditionEven(First);
  printf("Addition of even elements is: %d\n", iRet);

  return 0;
}
