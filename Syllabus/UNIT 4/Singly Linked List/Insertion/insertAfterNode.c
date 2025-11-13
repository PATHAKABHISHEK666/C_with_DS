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

struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  ptr->data = data;
  struct Node *p = head;

  ptr->next = prevNode->next;
  prevNode->next = ptr;

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
  head = insertAfterNode(head, four, 400);
  linkedListTraversal(head);
}