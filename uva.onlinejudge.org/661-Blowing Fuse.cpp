#include<iostream>
using namespace std;

int main()
{
	int n,m,c,a[25],s[25],cas=0;
	int i;

	while(scanf("%d%d%d",&n,&m,&c)!=EOF)
	{
		cas++;
		if(!n && !m && !c)
			break;

		memset(s,0,sizeof(s));

		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);

		int cnt=0,max=0,tmp;
		for(i=0;i<m;i++)
		{
			scanf("%d",&tmp);
			if(s[tmp]==0)
			{
				s[tmp] = 1;
				cnt += a[tmp];
				if(cnt>max)
					max=cnt;
			}
			else
			{
				s[tmp] = 0;
				cnt -= a[tmp];
			}
		}
		if(max>c)
		{
			printf("Sequence %d\nFuse was blown.\n\n",cas);
		}
		else
		{
			printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",cas,max);
		}
	}

	return 0;
}