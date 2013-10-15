#include<iostream>
using namespace std;

int main()
{
	int t,c,high,i,k,a;

	while(scanf("%d",&t)==1)
	{
		for(i=1;i<=t;i++)
		{
			scanf("%d",&c);
			high = 0;
			for(k=0;k<c;k++)
			{
				scanf("%d",&a);
				if(a>high)
					high = a;
			}
			printf("Case %d: %d\n",i,high);
		}
	}

	return 0;
}