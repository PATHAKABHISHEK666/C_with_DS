#include <stdio.h>
#include <stdlib.h>
void traverse();
int pop();
void push();
int stack[5];

int top = -1;

void main()
{
  int choice;
  char ch;

  do
  {
    printf("\n1.PUSH");
    printf("\n2.POP");
    printf("\n3.TRAVERSE");
    printf("\n4.EXIT");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      push();
      break;
    case 2:
      printf("\nThe Deleted element is %d ", pop());
      break;
    case 3:
      traverse();

      break;
    case 4:
      exit(0);
    default:
      printf("Wrong Choice !");
      break;
    }
  } while (choice != 4);
}

void push()
{
  int item;
  if (top == 4)
    printf("Stack is full!");
  else
  {
    printf("Enter the element to be inserted :");
    scanf("%d", &item);
    top++;
    stack[top] = item;
  }
}

int pop()
{
  int item;
  if (top == -1)
  {
    printf("\nStack is Empty");
  }
  else
  {
    item = stack[top];
    top = top - 1;
  }
  return item;
}

void traverse()
{
  int i;
  if (top == -1)
  {
    printf("\nThe Stack is Empty");
  }
  else
  {
    for (i = top; i >= 0; i--)
    {
      printf(" %d", stack[i]);
    }
  }
}