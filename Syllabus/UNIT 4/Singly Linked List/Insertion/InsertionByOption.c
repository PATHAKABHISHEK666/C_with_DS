#include <stdio.h>

#include <stdlib.h>

struct list
{
  char d;
  struct list *next;
};

char at, elem;
int index;

void show(struct list *ptr)
{
  printf("\n--SHOWING ELEMENTS--\n");
  while (ptr != NULL)
  {
    printf("%c ", ptr->d);
    ptr = ptr->next;
  }
}
struct list *frontInsert(struct list *head, char data)
{
  struct list *node = (struct list *)malloc(sizeof(struct list));
  node->d = data;
  node->next = head;
  head = node;
  show(head);
  return head;
}
struct list *insertatIndex(struct list *head, char data, int index)
{

  struct list *node = (struct list *)malloc(sizeof(struct list));

  struct list *p = head;
  int i = 0;
  while (i != index - 1)
  {
    p = p->next;
    i++;
  }
  node->d = data;
  node->next = p->next;
  p->next = node;

  return head;
};
struct list *rearInsert(struct list *head, char data)
{

  struct list *node = (struct list *)malloc(sizeof(struct list));

  struct list *p = head;
  while (p->next != NULL)
  {
    p = p->next;
  }
  node->d = data;
  node->next = NULL;
  p->next = node;

  return head;
};

void main()
{
  struct list *head = (struct list *)malloc(sizeof(struct list));
  struct list *second = (struct list *)malloc(sizeof(struct list));
  struct list *third = (struct list *)malloc(sizeof(struct list));
  int choice;
  head->d = 'A';
  head->next = second;
  second->d = 'B';
  second->next = third;
  third->d = 'C';
  third->next = NULL;

  while (1)
  {
    printf("\n_____________________\n");
    printf("\nLinked List Operations :\n");
    printf("1.Insert Element\n");
    printf("2.Delete Element\n");
    printf("3.Traverse Element\n");
    printf("0.ZERO TO EXIT-->\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter element you want to insert : ");
      fflush(stdin);
      scanf("%d", &elem);

      printf("Enter Position Where You want to insert\n");
      printf("F for Insertion at FIRST\n");
      printf("I for Insertion at INDEX\n");
      printf("L for Insertion at LAST\n");
      fflush(stdin);
      scanf("%c", &at);

      if (at == 'F' || at == 'F')
      {
        frontInsert(head, elem);
      }
      else if (at == 'I' || at == 'i')
      {
        printf("\nEnter Index where you want to insert :");
        scanf("%d", &index);
        insertatIndex(head, elem, index);
      }
      else if (at == 'L' || at == 'l')
      {
        rearInsert(head, elem);
      }
      else
        printf("WRONG CHOICE !");
      break;

    case 2:
      printf("\nDELETE FUNCTION BANAO");

    case 3:
      show(head);
      break;
    case 0:
      exit(0);
      break;
    default:
      printf("\nWrong Choice!");
      break;
    }
  }
}