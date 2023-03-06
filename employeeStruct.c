#include <stdio.h>
#include <string.h>
struct employeeDet {
  int empno;
  char empname[30], dept_name[10];
  int salary;
};
void main() {
  int i, n;
  printf("Enter the no. of employees: ");
  scanf("%d", &n);
  struct employeeDet emp[n];
  for (i = 0; i < n; i++) {
    printf("\nEnter Employee number: ");
    scanf("%d", &emp[i].empno);
    printf("\nEnter his name and department: ");
    scanf("%s %s", &emp[i].empname, &emp[i].dept_name);
    printf("\nEnter his salary: ");
    scanf("%d", &emp[i].salary);
  }
  printf("\n\nNumber \tName \tDepartment \tSalary");
  for (i = 0; i < n; i++) {
    printf("\n\t%d \t%s \t%s \t\t%d", emp[i].empno, emp[i].empname,
           emp[i].dept_name, emp[i].salary);
  }
}