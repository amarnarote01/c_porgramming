#include<stdio.h>
void con();
int main()
{
    con();

    return 0;
}
void con()
{
    float c,f;
    printf("Enter fahrenheit");
    scanf("%f",&f);
    c=((f-32)*5/9);
    printf("%f celcius ",c);

}