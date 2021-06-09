#include<stdio.h>

void pascal(int n)
{
    int a[20][20];
    for(int i=0;i<n;i++)
    {   
        for(int l=1;l<(n-i);l++)
                printf("\t");
        for(int j=0;j<=i;j++)
        {   
            if(j==0 || j==i)
            {
                a[i][j]=1;
                printf("%d\t\t",a[i][j]);
            }
            else
            {
                a[i][j]=a[i-1][j] + a[i-1][j-1];
                printf("%d\t\t",a[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the n value: ");
    scanf("%d",&n);
    pascal(n);
    return 0;
}