#include<stdio.h>
#include<string.h>

void repchar(char a[100], char b, char c)
{
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]==b)
            a[i]=c;
    }
}

int main()
{
    char b='o',c='@',a[]={"Welcome to C Programming"};
    printf("Enter the string: ");
    gets(a);
    printf("Enter a character to replce: ");
    scanf("%c",&b);
    printf("Enter character to replace with: ");
    scanf("%c",&c);
    printf("Before replace: %s",a);
    repchar(a,b,c);
    printf("\nAfter replace: %s",a);
    return 0;
}