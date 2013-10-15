#include<iostream>
using namespace std;

long bigmod(long b, long p, long m)
{
	long x;
	if(p==0)
		return 1;
	else if(p%2==0)
	{
		x=bigmod(b,p/2,m);
		x=x*x;
		return x%m;
	}
	else
	{
		x=bigmod(b,p-1,m);
		return ((b%m)*x)%m;
	}
}

int main()
{
	long r,b,p,m;
	while(scanf("%ld %ld %ld",&b,&p,&m)!=EOF)
	{
		r=bigmod(b,p,m);
		printf("%ld\n",r);
	}
	return 0;
}