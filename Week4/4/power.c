int fun(int a,int b)
{
if (b==0)
return 1;
else
return a * fun(a,b-1);
}