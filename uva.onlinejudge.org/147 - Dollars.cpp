#pragma disable(warning:4786)
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
#include<map>
#include<vector>
#include<list>
#include<string>
using namespace std;

typedef long long Int;

int main()
{
	Int *p, co[]={2000,1000,400,200,100,40,20,10,4,2,1}, r=11,n,i,k,c;
	double in;

	while(scanf("%lf",&in)==1 && in)
	{
		n = (Int)(in*100 + 0.5);
		n = n/5;
//		printf("%I64d\n",n);
		p = new Int[n+2];
		
		for(i=0;i<=n;i++)
			p[i]=0;

		p[0]=1;

		for(i=0;i<r;i++)
		{
			c = co[i];
			for(k=c; k<=n;k++)
			{
				p[k] += p[k-c];
			}
		}

		printf("%6.2lf%17.0lld\n",in,p[n]);
	}

	return 0;
}