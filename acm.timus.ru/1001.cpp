// http://acm.timus.ru/problem.aspx?space=1&num=1001
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

typedef __int64 Int;

int main()
{
//	freopen("in.txt","rb",stdin);
	Int num;
	double tmp;
	vector<double> ans;
	
	while(scanf("%I64d",&num)==1)
	{
		tmp = sqrt(num*1.0);
		ans.push_back(tmp);
	}

	Int len = ans.size()-1;
	for(len;len>=0;len--)
	{
		printf("%.4lf\n",ans[len]);
	}

	return 0;
}