#include<stdio.h>

int greatest(int a,int b,int c)
{
    if(a>=b && a>=c)
        return a;
    else if(b>=c && b>=a)
        return b;
    else
        return c;
}

int gcd(int a,int b,int c)
{
    int g=1;
    for(int i=greatest(a,b,c);i>0;i--)
    {
        if(a%i==0 && b%i==0 && c%i==0)
            g=g*i;
    }
    return g;
}

int main()
{
    int a,b,c;
    printf("Enter the values of a,b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("GCD(%d,%d,%d) = %d",a,b,c,gcd(a,b,c));
    return 0;
}