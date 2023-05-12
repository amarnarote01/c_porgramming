#include<stdio.h>
void circle();
int main()
{
    circle();

    return 0;
}
void circle()
{
    float area,r;
    printf("Enter radius  of circle");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area is = %f",area);

}