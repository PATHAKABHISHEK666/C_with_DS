#include <stdio.h>

main()
{
  int i;
  struct student
  {
    int rollno;
    char sex;
    float height, weight;
  };

  struct student data[3] =
      {
          {121, 'M', 5.7, 59.8},
          {122, 'F', 6.0, 65.2},
          {123, 'M', 6.2, 96.8},
      };

  printf("The initialized contents are :\n");

  for (int i = 0; i <= 2; i++)
  {
    printf("\n * * RECORD NO. %d * *\n", i + 1);
    printf("%d\n", data[i].rollno);
    printf("%d\n", data[i].sex);
    printf("%f\n", data[i].height);
    printf("%f\n", data[i].weight);
  }
}