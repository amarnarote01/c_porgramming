#include<stdio.h>
void main()
{
	int a,choice;
	char ch;
	printf("select your Choice:");
	printf("\n1.Square and cube of a number.\n2.To check year is leap year or not.\n3.to check alphabet is vowel or consonant.\n\t");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: printf("Enter a number= ");
		        scanf("%d",&a);
		        printf("Square of %d is = %d",a,a*a);
		        printf("\ncube of %d is = %d",a,a*a*a);
		        break;
		case 2:{int year;
				printf("\nEnter the year=");
				scanf("%d",&year);
				if(year%4==0 && year%100!=0)
				printf("It is a leap year");
				else
				printf("It is not a leap year");
				}
				break;
		case 3: { char ch;
				 printf("\nEnter the alphabet=");
				 scanf(" %c",&ch);
				 if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
				 printf("It is a vowel");
				 else
				 printf("It is a consonant");
				 }
				break;
		default: printf("Invalid Choice!!");
		        break;				       
	}
}