#include<iostream>
#include<algorithm>
using namespace std;

struct A{
	int  cnt;
	char a[51];
}all[101];

bool cmp(struct A a, struct A b)
{
	return (a.cnt < b.cnt);
}

int count(char b[],int n)
{
	int cnt=0, i, k;
	char/* tmp,*/ a[101];

	strcpy(a, b);

	for(i = 0; i < n; i++)
	{
		for(k = i+1; k < n; k++)
		{
			if(a[i] > a[k])
			{
			/*	tmp = a[i];
				a[i] = a[k];
				a[k] = tmp;*/
				cnt++;
			}
		}
	}
	return cnt;
}

int main()
{
	int t, n, m, i;

	while(scanf("%d",&t)==1)
	{
		while(t--)
		{
			scanf("%d %d",&n,&m);
			for(i = 0; i < m; i++)
			{
				scanf("%s",&all[i].a);
				all[i].cnt = count(all[i].a, n);
			}

			stable_sort(all,all+m,cmp);

			for(i = 0; i < m; i++)
			{
				printf("%s\n",all[i].a);
			}

			if(t)
				printf("\n");
		}
	}

	return 0;
}