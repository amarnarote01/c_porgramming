#include<stdio.h>
void rec();
int main()
{
    rec();

    return 0;
}
void rec()
{
    float l,b;
    printf("Enter length abd breadth of rectangle");
    scanf("%f %f",&l,&b);
    printf("perimeter is = %.2f",2*(l+b));

}