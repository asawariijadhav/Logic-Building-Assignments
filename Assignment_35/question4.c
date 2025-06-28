/////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question4.c
//  Description : Return second maximum element from singly linear linked list.
//  Problem     : Write a program which returns second maximum element
//                from singly linear linked list.
//
//                Input  : 110 -> 230 -> 320 -> 240
//                Output : 240
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
/////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int SecMaximum(PNODE Head)
{
  int iMax = INT_MIN, iSecMax = INT_MIN;

  while (Head != NULL)
  {
    if (Head->Data > iMax)
    {
      iSecMax = iMax;
      iMax = Head->Data;
    }
    else if (Head->Data > iSecMax && Head->Data != iMax)
    {
      iSecMax = Head->Data;
    }
    Head = Head->Next;
  }
  return iSecMax;
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 240);
  InsertFirst(&First, 320);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  int iRet = SecMaximum(First);
  printf("Second maximum element is: %d\n", iRet);

  return 0;
}
