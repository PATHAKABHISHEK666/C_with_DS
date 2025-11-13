#include <stdio.h>

struct initialization
{
  int number;
  char sex;
  int salary;
};

void main()
{

  struct initialization z[5];

  z[0].number = 1;
  z[0].salary = 4000;
  z[0].sex = 'M';

  z[1].number = 2;
  z[1].salary = 2000;
  z[1].sex = 'F';

  z[2].number = 3;
  z[2].salary = 9000;
  z[2].sex = 'F';

  z[3].number = 4;
  z[3].salary =22000;
  z[3].sex = 'M';

  z[4].number = 5;
  z[4].salary = 444;
  z[4].sex = 'M';

  for (int i = 0; i < 5; i++)
  {
    printf("Person no %d gender %c have salary : %d\n", z[i].number, z[i].sex, z[i].salary);
  }
}
