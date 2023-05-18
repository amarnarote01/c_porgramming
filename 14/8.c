// 8)Write a C program to demonstrate the concept of101 array of structure.
#include<stdio.h>
struct employee
{
  int id;
  char name[20];
  float sal;
};
int main()
{
    struct employee e[100];
    int i,n;
    printf("how many employee");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter employee details of %d: id ,name,sal",i);
    scanf("%d  %s %f",&e[i].id,e[i].name,&e[i].sal);
   
    }
      for(i=0;i<n;i++)
      {
    printf("Displaying Employee details of %d:\n\n",i+1);
    printf("Employee ID=%d\n",e[i].id);
    printf("Employee Name= %s \n",e[i].name);
    printf("Employee Sal=%f\n",e[i].sal);
      }
}