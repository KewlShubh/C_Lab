int max(int *x,int n)
{
int temp,i;
for(i=0,temp=*x;i<n;i++)
{
if (*(x+i)>temp)
temp=*(x+i);
}
return temp;
}
int min(int *x,int n)
{
int temp,i;
for(i=0,temp=*x;i<n;i++)
{
if (*(x+i)<temp)
temp=*(x+i);
}
return temp;
}