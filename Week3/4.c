#include<stdio.h>

void prime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("%d is not a prime number",n);
            n=-1;
            break;
        }
    }
    if(n==1)
        printf("1 is neither prime nor a composite number");
    else if(n!=-1)
        printf("%d is a prime number",n);
    
}

int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    prime(n);
    return 0;
}