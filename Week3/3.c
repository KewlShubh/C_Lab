#include<stdio.h>
void armstrong(int n)
{
    int d,res,num;
    num=n;
    res=0;
    while(n!=0)
    {
        d=n%10;
        res+=d*d*d;
        n/=10;
    }
    if(res==num)
    {
        printf("%d is an armstrong number\n",num);
    }
    else
    {
        printf("%d is not an armstrong number\n",num);
    }
}
void perfect(int n)
{
    int f=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            f+=i;
        }
    }
    if(f==n)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
}
int main()
{
    int n;
    printf("Input any number: ");
    scanf("%d",&n);
    armstrong(n);
    perfect(n);
    return 0;
}