#include<stdio.h>
int fact(int n)
{
if (n==0)
return 1;
else
return (n*fact(n-1));
}
void series(int x, int y)
{
float k;
k = fact(x)/(fact(y)*fact(x-y));
printf("nCr is :- ");
printf("%0.2f",k);
}