/////////////////////////////////////////////////////////////////////////////////////
//
//  File Name   : question2.c
//  Description : Display all palindrome elements from singly linear linked list.
//  Problem     : Write a program which displays all elements which are palindrome
//                from singly linear linked list.
//                Input  : 111 -> 28 -> 17 -> 141 -> 6 -> 89
//                Output : 111 141 6
//
//  Author      : Asawari Jadhav
//  Date        : 27/06/2025
//
/////////////////////////////////////////////////////////////////////////////////////

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

int IsPalindrome(int num)
{
  int rev = 0, temp = num;
  while (num > 0)
  {
    rev = rev * 10 + (num % 10);
    num /= 10;
  }
  return (rev == temp);
}

void DisplayPalindrome(PNODE Head)
{
  while (Head != NULL)
  {
    if (IsPalindrome(Head->Data))
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
  InsertFirst(&First, 141);
  InsertFirst(&First, 17);
  InsertFirst(&First, 28);
  InsertFirst(&First, 111);

  DisplayPalindrome(First);

  return 0;
}
