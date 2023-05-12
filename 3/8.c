#include<stdio.h>
int main()
{
   float Physics, Chemistry, Biology, Mathematics ,Computer ,Percentage;
    printf("Enter your mark of Physics");
    scanf("%f",&Physics);
    printf("Enter your mark of Chemistry");
    scanf("%f",&Chemistry);
    printf("Enter your mark of Biology");
    scanf("%f",&Biology);
    printf("Enter your mark of Mathematics");
    scanf("%f",&Mathematics);
    printf("Enter your mark of Computer");
    scanf("%f",&Computer);
    Percentage = ((Physics+Chemistry+Biology+Mathematics+Computer )/500)*100;
    if(Percentage>=90)
    printf("percentage is %.2f and Grade is A",Percentage);
    else if(Percentage>=80)
    printf("percentage is %.2f and Grade is B",Percentage);
    else if(Percentage>=70)
    printf("percentage is %.2f and Grade is C",Percentage);
    else if(Percentage>=60)
    printf("percentage is %.2f and Grade is D",Percentage);
    else if(Percentage>=40)
    printf("percentage is %.2f and Grade is E",Percentage);
    else
    printf("percentage is %.2f and Grade is f",Percentage);

    return 0;


}