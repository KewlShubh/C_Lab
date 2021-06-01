#include<stdio.h>

int main()
{
    int f=1,sum=0;
    for(int i=1;i<6;i++)
    {
        f=f*i;
        sum+=f/i;
    }
    printf("The sum of the series is: %d",sum);
    return 0;
}