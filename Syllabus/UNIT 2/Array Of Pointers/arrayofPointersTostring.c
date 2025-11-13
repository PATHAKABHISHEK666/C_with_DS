#include <stdio.h>

void main()
{

  char *ptr[5];

  ptr[0] = "Hello";
  ptr[1] = "Friends";
  ptr[2] = "This";
  ptr[3] = "Is";
  ptr[4] = "Abhishek";

  for (int i = 0; i < 5; i++)
  {
    printf("%s ", (ptr[i]));
  }
}