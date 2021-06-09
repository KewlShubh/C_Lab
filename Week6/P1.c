#include<stdio.h>

int main()
{
    int a[5][5],m=5,n=5;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<(m-i-1))
            {
                a[i][j]=1;
            }
            else if(j>(m-i-1))
            {
                a[i][j]=-1;
            }
            else
            {
                a[i][j]=0;
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}