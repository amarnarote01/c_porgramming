#include<stdio.h>
void add();
int main()
{
    add();

    return 0;
}
void add()
{
    int a,b;
    printf("Enter two no");
    scanf("%d %d",&a,&b);
    printf("Sum is = %d",a+b);

}