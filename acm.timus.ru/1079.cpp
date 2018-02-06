// http://acm.timus.ru/problem.aspx?space=1&num=1079
#pragma warning(disable:4786)
#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<map>
#include<list>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
/*
#include<>
#include<>
#include<>
#include<>
*/
using namespace std;


int main()
{
//	freopen("in.txt","rb",stdin);
	long int n,a[100000],i,j, ans;
	a[0]=0;
	a[1]=1;
	for(i=1;i<=49999;i++)
	{
		j=2*i;
		a[j] = a[i];
		a[j+1] = a[i]+a[i+1];
	}

	ans = a[0];
	for(i=1;i<100000;i++)
	{
		if(ans > a[i])
			a[i] = ans;
		else
			ans = a[i];
	}

	while(scanf("%ld",&n)==1 && n)
	{
		printf("%ld\n",a[n]);
	}

	return 0;
}