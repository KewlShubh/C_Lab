#include<stdio.h>
#include"header.h"
void main()
{
printf("Entre the number of elements to be stored:- ");
int n;scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
printf("Element- %d : ",i);
scanf("%d",&arr[i]);
}
printf("The Mximum element is:- %d \n",max(arr,n));
printf("The Minimum element is:- %d",min(arr,n));
printf("\n");
}