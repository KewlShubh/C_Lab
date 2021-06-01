#include<stdio.h>
#include<string.h>

void remov(char str[100])
{
    char rep[100];
    int flag=0,i,l;
    for(i=0,l=0;i<=strlen(str);i++)
    {   
        flag=0;
        for(int j=0;j<i;j++)
        {
            if(str[j]==str[i] && str[i]!=' ')
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            rep[l]=str[i];
            l++;
        }
    }
    printf("\nString after removing duplicates: %s",rep);
}

int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);
    printf("String before removing duplicates: %s",str);
    remov(str);
    return 0;
}