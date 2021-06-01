#include<stdio.h>
#include"header.h"
void main()
{
printf("Entre the base value:- ");
int base;scanf("%d",&base);
printf("Entre the power value:- ");
int power;scanf("%d",&power);
printf("The value of %d to the power of %d is:- %d",base,power,fun(base,power));
printf("\n");
}