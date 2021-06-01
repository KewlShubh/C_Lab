#include<stdio.h>
#include<math.h>
//68 -> 104
int octal(int n)
{
    int i=0,sum=0;
    while(n!=0)
    {
        sum+=pow(10,i)*(n%8);
        n/=8;
        i++;
    }
    return sum;
}
int main()
{
    int n;
    printf("Input any decimal number: ");
    scanf("%d",&n);
    n=octal(n);
    printf("Equivalent Octal Number: %d",n);
    return 0;
}