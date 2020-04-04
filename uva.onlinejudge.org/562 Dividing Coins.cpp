// http://uva.onlinejudge.org/external/5/562.html
// 562 Dividing Coins

#include<iostream>
#include<stdio.h>
using namespace std;

#define r 105
#define c 50005

int v[i];
int res[r][c];

void ks(int m, int w)
{
	int i, j;

	for(i = 0; i<=w; i++)
		res[i] = 0;

	for(i=0; i<m; i++)
	{
		for(j=0;j<=w; j++)
		{
			if(res[])
		}
	}

	return ans;
}

int main()
{
	int n, m, i, tot;

	scanf("%d", &n);

	while(n--)
	{
		scanf("%d", &m);
		tot = 0;

		for(i=0; i<m; i++)
		{
			scanf("%d", &v[i]);
			tot += v[i];
		}

		tot = tot/2;

		ks(m, tot);
	}

	return 0;
}
