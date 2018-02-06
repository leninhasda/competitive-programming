// http://acm.timus.ru/problem.aspx?space=1&num=1197
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
	int ar[][8]={{2,3,4,4,4,4,3,2}
				,{3,4,6,6,6,6,4,3}
				,{4,6,8,8,8,8,6,4}
				,{4,6,8,8,8,8,6,4}
				,{4,6,8,8,8,8,6,4}
				,{4,6,8,8,8,8,6,4}
				,{3,4,6,6,6,6,4,3}
				,{2,3,4,4,4,4,3,2}}, t;

	char ch[3];

	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&ch);
		printf("%d\n",ar[ch[0]-'a'][ch[1]-'1']);
	}

	return 0;
}