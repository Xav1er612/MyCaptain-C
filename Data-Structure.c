#include <stdio.h> 
struct employee
{
  char name[30];
  int Age;
  int Phone_Number;
  float salary;
};
int main()
{
  struct employee emp;
  printf("\nEnter details :\n");
  printf("Name: ");          
  gets(emp.name);
  printf("Age: ");            
  scanf("%d",&emp.Age);
  printf("Phone Number: ");        
  scanf("%f",&emp.Phone_Number);
  printf("Salary: ");        
  scanf("%f",&emp.salary);
  printf("\nEntered detail is: \n");
  printf("Name: %s\n",emp.name);
  printf("Age: %d\n",emp.Age);
  printf("Phone Number: %d\n",emp.Phone_Number);
  printf("Salary: %f\n",emp.salary);
  return 0;
}