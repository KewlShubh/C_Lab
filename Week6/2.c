#include<stdio.h>

void symmetric(int a[20][20], int m, int n)
{
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
                {
                    flag=1;
                    break;
                }
        }
    }
    if(!flag)
        printf("The given matrix is a symmetric matrix:\n");
    else
        printf("The given matrix is not a symmetric matrix:\n");

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
int main()
{
    int m,n,a[20][20];
    printf("Enter the number of rows: ");
    scanf("%d",&m);
    printf("Enter the number of columns: ");
    scanf("%d",&n);
    printf("Enter elements in matrix of size of %d X %d:\n",m,n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    symmetric(a,m,n);
    return 0;
}