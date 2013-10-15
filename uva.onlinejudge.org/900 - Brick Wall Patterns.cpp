// Brick Wall Patterns

#include<iostream>
#include<stdio.h>
using namespace std;

typedef __int64 I;
//typedef long long L;

int main()
{
	I f[51];
	int n;
	f[0] = 1;
	f[1] = 1;

	for(n = 2; n<=50; n++)
		f[n] = f[n-1] + f[n-2];

	while(scanf("%d",&n)==1)
	{
		if(!n) break;

		printf("%I64d\n", f[n]);
	}
	return 0;
}