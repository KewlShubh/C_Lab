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
    char b,c,a[100];
    printf("Enter the string: ");
    gets(a);
    printf("Enter a character and replacing character:");
    scanf("%c %c",&b,&c);
    printf("Before replace: %s",a);
    repchar(a,b,c);
    printf("\nAfter replace: %s",a);
    return 0;
}
