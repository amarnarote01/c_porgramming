#include <stdio.h>
int findIndexOf(int [],int);
int main()
{
    int ar[] = {12,4,5,7,-4,7,55,9};
    
    int index;
    index = findIndexOf(ar, 7);
    if(index == -1)
        printf("data not found");
    else
        printf("first index for 7 = %d ",index);

    return 0;
}
int findIndexOf(int ar[], int data)
{
    int i,j,index=-1;

    for(i=0;i<8;i++)
    {
        for(j=i+1;j<8;j++)
        {
            if(ar[i]==data)
            {
             index=i;
             return index;
    
            }
        }
    }
    
}