int prime(int x)
{
for(int count=2;count<=(x/2);count++)
if (x%count==0)
return 0;
return x;
}
int nprime(int n)
{
int i=1;
while(i)
{
if (prime(n))
return n;
n+=1;
}
}