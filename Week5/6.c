#include<stdio.h>
#include<string.h>

int strend(char str[], char end[])
{   
    int flag=0;
    for(int i=strlen(str)-1,j=strlen(end)-1;j>0;i--,j--)
    {
        if(end[j]!=str[i])
            flag=1;
    }
    if(!flag)
        return 1;
    else
        return 0;
}

int main()
{
    char str[100],end[100];
    printf("Enter the string: ");
    gets(str);
    printf("Enter the ending word to be checked: ");
    gets(end);
    printf("%d",strend(str,end));
    return 0;
}