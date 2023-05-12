#include<stdio.h>
void con();
int main()
{
    con();

    return 0;
}
void con()
{
    float n;
    printf("Enter value in km");
    scanf("%f",&n);
    printf("%.2fkm =%.2fm",n,n*1000);

}