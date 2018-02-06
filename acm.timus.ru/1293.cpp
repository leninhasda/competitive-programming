// http://acm.timus.ru/problem.aspx?space=1&num=1293
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

	long int n, a, b;
	
	while(scanf("%ld %ld %ld",&n,&a,&b)==3)
	{
		printf("%ld\n",(n*a*b*2));
	}

	return 0;
}