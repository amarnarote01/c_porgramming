#include<stdio.h>
void main()
{
	float unit;
	printf("Enter the unit number:");
	scanf("%f",&unit);
    if(unit<=50)
	{
		printf("The Electricity bill is:%f",(unit*0.5));
	}
	else if(unit>50 && unit<150)
	{
		float x,tot;
		x=unit-50;
		tot = (50*0.5)+(x*0.75);
		printf("The Electricity bill is:%f",tot);
	}
	else if(unit>150 && unit<250)
	{
		float y,tot;
		y=unit-150;
		tot = (50*0.5)+(100*0.75)+(y*1.2);
		printf("The Electricity bill is:%f",tot);
	}
	else
	{
		float y,tot;
		y=unit-250;
		tot = (50*0.5)+(100*0.75)+(100*1.2)+(y*1.5);
		printf("The Electricity bill is:%f",tot);
	}
    return 0;
}