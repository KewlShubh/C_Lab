#include<stdio.h>
void unique(int a[],int n)
{
    int flag=0;
    printf("Unique elements of array are: ");
    for(int i=0;i<n;i++)
    {   flag =0;
        for(int j=0;j<i;j++)
        {
            if((a[i]==a[j])&&(i!=j))
                flag=1;
        }
        if(flag==0)
        {
            printf("%d ",a[i]);
        }
    }
}