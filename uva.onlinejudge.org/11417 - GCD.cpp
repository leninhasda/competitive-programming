#include<iostream>
#include<stdio.h>
using namespace std;

#define mx 100

int GCD(int a, int b)
{
	if(!b)
		return a;
	else
		return GCD(b, a%b);
}

int main()
{
	int n,G,i,j;

	while(scanf("%d",&n)==1)
	{
		if(!n) break;

		G = 0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				G+=GCD(i,j);
			}
		}

		cout<<G<<endl;
	}

	return 0;
}