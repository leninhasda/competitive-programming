#include<iostream>
using namespace std;

int main()
{
	long long in,c,i;
	while(scanf("%lld",&in)!=EOF)
	{
		if(in<0)
			break;
		c=1;
		for(i=0;i<=in;i++)
		{
			c+=i;
		}
		printf("%lld\n",c);
	}
	return 0;
}