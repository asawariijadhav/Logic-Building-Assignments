///////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question1.c
//  Description : Reverse each element of singly linear linked list.
//  Problem     : Write a program which reverse each element of singly linear linked list.
//                Input  : 111 -> 28 -> 17 -> 41 -> 6 -> 89
//                Output : 111 82 71 14 6 98
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
  int Data;
  struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn->Next = NULL;
  newn->Data = no;

  newn->Next = *Head;
  *Head = newn;
}

int ReverseDigit(int num)
{
  int rev = 0;
  while (num != 0)
  {
    rev = rev * 10 + (num % 10);
    num /= 10;
  }
  return rev;
}

void Reverse(PNODE Head)
{
  while (Head != NULL)
  {
    printf("%d ", ReverseDigit(Head->Data));
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
  InsertFirst(&First, 111);

  Reverse(First);

  return 0;
}
