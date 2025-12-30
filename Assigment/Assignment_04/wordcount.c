// Online C compiler to run C program online
#include <stdio.h>

int wordCounter(char *str)
{
  int i = 0;
  int count = 0;
  while (str[i] != '\0')
  {
    if (i == 0 && str[i] >= 42)
    {
      count++;
    }
    if (str[i] == 32 && str[i+1] >= 41)
      count++;
    else
    {
      printf("%c", str[i]);
    }
    i++;
  }
  return count;
}

void input(char *str)
{
  printf("Enter the sentence\t");
  gets(str);
}

int main()
{
  char str[100];
  input(str);
  printf("*%s*", str);
  int count = wordCounter(str);

  printf("\nWords are : %d", count);
  return 0;
}