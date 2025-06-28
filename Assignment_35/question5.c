//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question5.c
//  Description : Display addition of digits of each element from singly linear linked list.
//  Problem     : Write a program which displays addition of digits of each element
//                from singly linear linked list.
//
//                Input  : 110 -> 230 -> 20 -> 240 -> 640
//                Output : 2 5 2 6 10
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
////////////////////////////////////////////////////////////////////////////////////////////

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

int DigitSum(int no)
{
  int iSum = 0;
  while (no != 0)
  {
    iSum += no % 10;
    no /= 10;
  }
  return iSum;
}

void SumDigit(PNODE Head)
{
  while (Head != NULL)
  {
    printf("%d ", DigitSum(Head->Data));
    Head = Head->Next;
  }
  printf("\n");
}

int main()
{
  PNODE First = NULL;

  InsertFirst(&First, 640);
  InsertFirst(&First, 240);
  InsertFirst(&First, 20);
  InsertFirst(&First, 230);
  InsertFirst(&First, 110);

  printf("Addition of digits of each element: ");
  SumDigit(First);

  return 0;
}
