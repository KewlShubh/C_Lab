#include<stdio.h>
#include<string.h>

void count(char str[100])
{
    int flag=0;
    char c;
    for(int i=0;i<=strlen(str);i++)
    {
        if(i==0)
            c=' ';
        else if(str[i-1]!=' ') // This is used to omit all spaces while counting characters
            c= str[i-1];
        else
            goto loop;
        for(int j=0;j<strlen(str);j++)
        {   
            if(c==str[j]) // Initiates count for a certain character
                {
                    flag++;
                    str[j]=' '; // Converts all repeated character to space so that they are not counted twice
                }
        }
        printf("%c occurs %d times\n",c,flag);
        loop:
        flag=0;

    }
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    gets(str);
    count(str);
    return 0;
}