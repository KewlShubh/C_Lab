#include<stdio.h>
#include"reverse.h"

int main()
{
    int a[100],n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of your array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    revi(a,n);
    printf("Reversed using indexing:\n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    revp(a,n);
    printf("\nReversed using pointers:\n");
    for(int j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    return 0;
}