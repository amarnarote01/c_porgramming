#include<stdio.h>
int main()
{
    int month;
    printf("Enter the no. of Month ");
    printf("\n1.jan\n2.feb\n3.march\n4.april\n5.may\n6.june\n7.july\n8.aug\n9.sep\n10.oct\n11.nov\n12.dec\n\n");
    scanf("%d",&month);
    switch(month)
    {
      case 1:printf("jan has 31 days");
             break;
      case 2:printf("feb has 28/29 days");
             break;
      case 3:printf("march has 31 days");
             break;
      case 4:printf("april has 30 days");
             break;
      case 5:printf("may has 31 days");
             break;
      case 6:printf("june has 30 days");
             break;
      case 7:printf("july has 31 days");
             break;
      case 8:printf("aug has 31 days");
             break;
      case 9:printf("sept has 30 days");
             break;
      case 10:printf("oct has 31 days");
             break;
      case 11:printf("nov has 30 days");
             break;
      case 12:printf("dec has 31 days");
             break;
      default : printf("Invalid month");
             break;

    }
    return 0;
}