

int fib(int n){
int a,b,res;
int i;
a=0;
b=1;
res=0;
if (n==0)
{
    return a;
}
else if (n==1)
{
    return b;
}
else
{
    int i=2;
while(i<=n)
{
res=a+b;
a=b;
b=res;
i++;
}
return res;
}
}
