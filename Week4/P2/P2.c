#include<stdio.h>
#include"header.h"

int main()
{
    int n,a[100];
    printf("Enter how many Fibonacci numbers you want populate:\n");
    scanf("%d",&n);
    printf("Fibonacci number are:\n");
    for(int i=1;i<=n;i++)
    {
        a[i]=fab(i);
        printf("%d\n",a[i]);
    }
    return 0;
}