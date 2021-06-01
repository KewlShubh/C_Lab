#include<stdio.h>
void palindrome(int n)
{
	int res=0;
	int num;
	num=n;
	while(n!=0)
	{
		res=res*10+(n%10); 
		n/=10;
	}
	if(num==res)
	{
		printf("%d is a palindrome",num);
	}
	else
	{
		printf("%d is not a palindrome",num);
	}
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	palindrome(n);
	return 0;
}
