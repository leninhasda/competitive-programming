// http://uva.onlinejudge.org/external/1/147.html
// 147 Dollars

#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cmath>
using namespace std;

typedef unsigned long long Int;

Int nway[6005];
int coin[11] = { 1,2,4,10,20,40,100,200,400,1000,2000};

int main()
{
	int i,j,n,v,c;
	int d,p;
	memset(nway,0,sizeof(nway));
	v = 11;
	nway[0] = 1;
	int cnt=1;
	n = 6005;
	for (i=0; i<v; i++)
	{
		c = coin[i];
		for (j=c; j<=n; j++)
		{
			nway[j] += nway[j-c];
		}
	}

	while(scanf("%d.%d",&d,&p)==2)
	//double dd;
	//while(scanf("%lf", &dd)==1)
	{
		if(d==0 && p==0)
			break;
        //if(dd == 0) break;
		n= d*100+p;
		//n = (int)(dd*100+.5);
		if(n%5==0)
		{
			n = ceil((1.0*n)/5);
			if(p==0)
				printf("%3d.00%17llu\n",d,nway[n]);
			else
				printf("%3d.%2d%17llu\n",d,p,nway[n]);
		}/*
		else
		{
			v=0;
			if(p==0)
				printf("%3d.00%17d\n",d,v);
			else
				printf("%3d.%2d%17d\n",d,p,v);
		}*/
	}
	return 0;
}
