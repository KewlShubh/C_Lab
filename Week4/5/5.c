#include<stdio.h>
#include"header.h"

void main()
{
printf("Entre the number to be checked:- ");
int num;
scanf("%d",&num);
if(prime(num)!=0)
printf("%d is a prime number",num);
else
{
printf("%d is not a prime number\n",num);
printf("The next prime number is:- %d",nprime(num+1));
}
printf("\n");
}
