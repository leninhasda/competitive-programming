#include<iostream>
using namespace std;

int main()
{
	int t;

	scanf("%d",&t);

	int i,n,k,p;
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d",&n,&k,&p);

		int ans = (k+p)%n;
		if(!ans)
			printf("Case %d: %d\n",i,n);
		else
			printf("Case %d: %d\n",i,ans);
	}

	return 0;
}