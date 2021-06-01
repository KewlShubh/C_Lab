//1 A)
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverse(char str[100])
{
    char rev[100];
    for(int i=0;str[i]!='\0';i++)
    {
        rev[i] = str[strlen(str)-i-1];
        
    }
    printf("The string after reversing is: %s\n",rev);
    
}

void strcompare(char str[100])
{
    int flag=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==str[strlen(str)-i-1] || toupper(str[i])==str[strlen(str)-i-1] || str[i]==toupper(str[strlen(str)-i-1]))
        {
            flag=0;
        }
        else
        {
           flag=1;
           break;
        }
    }
    if(flag==0)
    {
        printf("Given string %s is a palindrome\n",str);
    }
    else
    {
        printf("Given string %s is not a palindrome\n",str);
    }
}


int main()
{
    char str[100];
    printf("Enter the string to be reversed: ");
    gets(str);
    reverse(str);
    strcompare(str);
    return 0;
}