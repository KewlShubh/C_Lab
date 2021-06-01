#include<stdio.h>
#include"header.h"

int main()
{
    int a[100],n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a,n);
    return 0;
}