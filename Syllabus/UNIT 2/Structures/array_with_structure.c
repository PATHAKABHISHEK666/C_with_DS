#include <stdio.h>

void main()
{

  struct employee
  {
    char ename[30];
    char sex;
    char dept[30];
    int sal;
    char add[50];
  };

  struct employee data[3] =
      {
          {"Ravi", 'M', "MECH", 15000, "Delhi"},
          {"Rajesh", "M", "ELEC", 32000, "Indore"},
          {"Shella", "F", "COMP", 70000, "Delhi"}};

  for (int i = 0; i <= 2; i++)
  {
    printf("\n * * RECORD NO. %d * *\n", i + 1);
    printf("Employee Name : %s\n", data[i].ename);
    printf("Employee Gender : %c\n", data[i].sex);
    printf("Employee Department : %s\n", data[i].dept);
    printf("Employee Salary : %d\n", data[i].sal);
    printf("Employee Address : %s\n", data[i].add);
  }
}