// http://acm.timus.ru/problem.aspx?space=1&num=1209
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
	__int64 id,cnt,t,n;
	map<__int64, __int64> m;
	
	m[1] = 1;

	id = cnt = 2;

	while(id<=2147483650)
	{
		m[id] = 1;
		id+=cnt;
		cnt++;
	}

	scanf("%I64d",&t);
	
	while(t--)
	{
		scanf("%I64d",&n);
		printf("%I64d ",m[n]);
	}

	return 0;
}