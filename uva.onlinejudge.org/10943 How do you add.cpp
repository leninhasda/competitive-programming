// http://uva.onlinejudge.org/external/109/10943.html
// 10943 How do you add?

#include<iostream>
#include<stdio.h>
using namespace std;

#define mx 105 

int md = 1000000;
int mem[mx][mx];

int fn(int n, int k)
{
	if(k==0)
	{
		if(n) return 0;
		return 1;
	}

	if(mem[n][k]>=0) 
		return mem[n][k];

	int ans=0, i;

	for(i=0; i<=n; i++)
	{
		ans += fn(n-i, k-1);
	}
	
	return ans%md;
}

int main()
{
	int n, k;

	int i, j;

	for(i=0;i<mx; i++)
		{
			for(j=0;j<mx; j++)
			{
				mem[i][j] = -1;
			}
		}

	while(scanf("%d %d", &n, &k)==2)
	{
		if(!n && !k) 
			break;		
		
		int ans = fn(n,k);
		printf("%d\n", ans);

	}

	
	return 0;
}