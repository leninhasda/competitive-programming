// http://acm.timus.ru/problem.aspx?space=1&num=1068

#include<iostream>
#include<cmath>
using namespace std;

typedef __int64 I;

int main()
{
	I n, ans;
	while(scanf("%I64d",&n)==1)
	{
		if(n==0)
			printf("1\n");
		else if(n>0)
		{
			ans = (n*(n+1))/2;
			printf("%I64d\n",ans);
		}
		else if(n<0)
		{
			n = abs(n);
		//	printf("%I64d\n",n);
			ans = ((n*(n+1))/2) - 1;
			printf("-%I64d\n",ans);
		}
	}

	return 0;
}