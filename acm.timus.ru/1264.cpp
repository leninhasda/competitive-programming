// http://acm.timus.ru/problem.aspx?space=1&num=1264
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

	long int n,m;
	while(scanf("%ld %ld",&n,&m)==2)
	{
		printf("%ld\n",(n*(m+1)));
	}

	return 0;
}