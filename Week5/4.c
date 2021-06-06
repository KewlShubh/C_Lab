#include<stdio.h>
#include<string.h>
void concat(char s[100], char e[100],int n)
{
    for(int i=0;i<n;i++)
    {
        int c=strlen(s)+strlen(e);
        for(int i=strlen(s),j=0;i<c;i++,j++)
        {
            s[i]=e[j];
        }
    }
    printf("Concatenated string is %s",s);
}

int main()
{
    char s[100],e[100];
    int n;
    printf("Enter 1st string: ");
    scanf("%s",s);
    printf("Enter 2nd string: ");
    scanf("%s",e);
    printf("Enter the number of times you want to append: ");
    scanf("%d",&n);
    concat(s,e,n);
    return 0;
}