void revi(int a[],int n)
{
    int b[100];
    for(int i=1;i<=n;i++)
    {
        b[n-i]=a[i-1];
    }
    for(int i=0;i<=n;i++)
    {
        a[i]=b[i];
    }
}

void revp(int a[],int n)
{
    int b[100];
    for(int i=0,j=n-1;i<n;i++,j--)
    {
        *(b+i)=*(a+j);
    }
    for(int i=0;i<n;i++)
    {
        *(a+i)=*(b+i);
    }
}