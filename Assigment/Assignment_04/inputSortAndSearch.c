#include <stdio.h>
#include <string.h>
#define SIZE 5
#define MAX_LEN 50

int main(void)
{
  char names[SIZE][MAX_LEN];
  int i, j;
  char temp[MAX_LEN];
  char str[50];

  printf("Enter %d Names:\n", SIZE);
  for (i = 0; i < SIZE; i++)
  {
    scanf("%s", names[i]);
  }

  for (i = 0; i < SIZE - 1; i++)
  {
    for (j = 0; j < SIZE - i - 1; j++)
    {
      if (strcmp(names[j], names[j + 1]) > 0)
      {
        strcpy(temp, names[j]);
        strcpy(names[j], names[j + 1]);
        strcpy(names[j + 1], temp);
      }
    }
  }

  printf("\nSorted Names:\n");
  for (i = 0; i < SIZE; i++)
  {
    printf("%s\n", names[i]);
  }

  printf("Enter the string to search\n");
  scanf("%s", str);

  for (i = 0; i < SIZE; i++)
  {
    if (strcmp(str, names[i]) == 0)
    {
      printf("Your String is \" %s \" is found at %d place", str, i + 1);
      break;
    }
  }

  return 0;
}