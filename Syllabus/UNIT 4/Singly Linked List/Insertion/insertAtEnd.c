#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
  while (ptr != NULL)
  {
    printf("Element :%d\n", ptr->data);
    ptr = ptr->next;
  }
  printf("END--\n");
};

struct Node *insertAtEnd(struct Node *head, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = ptr;
  ptr->next = NULL;
  return head;
};

void main()
{

  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *four;

  head = (struct Node *)malloc(sizeof(struct Node));

  second = (struct Node *)malloc(sizeof(struct Node));

  third = (struct Node *)malloc(sizeof(struct Node));

  four = (struct Node *)malloc(sizeof(struct Node));

  head->data = 100;
  head->next = second;
  second->data = 101;
  second->next = third;
  third->data = 102;
  third->next = four;
  four->data = 103;
  four->next = NULL;

  linkedListTraversal(head);
  head = insertAtEnd(head, 56);
  linkedListTraversal(head);
}