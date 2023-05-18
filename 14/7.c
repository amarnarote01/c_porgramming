// 7)Write a C program to create employee structure, store data and display data in employee structure.
#include<stdio.h>
struct employee
{
  int id;
  char name[20];
  float sal;
}e;
int main()
{
    printf("Enter employee details: id ,name,sal");
    scanf("%d  %s %f",&e.id,e.name,&e.sal);
    printf("Displaying Employee details:\n");
    printf("Employee ID=%d\n",e.id);
    printf("Employee Name= %s \n",e.name);
    printf("Employee Sal=%f\n",e.sal);


}