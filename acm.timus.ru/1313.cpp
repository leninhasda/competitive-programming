// http://acm.timus.ru/problem.aspx?space=1&num=1313
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
	int n, a[100][100],i,j,ti,tj,id;
	bool fi=false;

	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);

		i=j=0; ti=tj=1; id=n-1; fi=false;
		while(1)
		{
			printf("%d ",a[i][j]);

			if(i==id && j==id) break;

			if(i==0 && !fi && j!=id)
			{
				i=ti;
				ti++;
				j=0;
			}
			else if(j==id)
			{
				fi=true;
				ti=id;
				i=ti;
				j=tj;
				tj++;
			}
			else
			{
				i--;
				j++;
			}
		}

		printf("\n");
	}

	return 0;
}