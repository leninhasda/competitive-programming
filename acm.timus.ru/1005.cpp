// http://acm.timus.ru/problem.aspx?space=1&num=1005

#pragma warning(disable:4786)
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<list>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<string>
using namespace std;

int main()
{
	long int n, a[22], i, j, p, total, target, mx, ans;

	while(scanf("%ld",&n)==1)
	{
		total = 0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
			total+=a[i];
		}

		target = total/2;
///		cout<<target<<endl;

		p = pow(2.0, n*1.0);

		mx=ans=0;

		for(i=0; i<p; i++)
		{
			mx=0;
			for(j=0;j<n;j++)
			{
				if(i & 1<<j)
				{
					mx+=a[j];
				}
			}
			if(mx<=target)
			{
				if(mx>ans) ans = mx;
			//	printf("target: %ld mx: %ld ans: %ld\n",target, mx, ans);
			}
		}

		printf("%ld\n", abs(ans-(total-ans)));
	}
	return 0;
}