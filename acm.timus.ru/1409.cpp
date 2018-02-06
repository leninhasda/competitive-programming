// http://acm.timus.ru/problem.aspx?space=1&num=1409
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
	int a, b;
	while(scanf("%d %d",&a,&b)==2)
		printf("%d %d",(b-1),(a-1));
	return 0;
}