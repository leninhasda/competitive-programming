#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 30005

int parent[MAX],rank[MAX],group[MAX],high=1;

void init()
{
	for(int i=0;i<MAX;i++)
	{
		group[i]=1;
		rank[i]=1;
		parent[i]=i;
	}
}

int find_parent(int p)
{
	if(parent[p]!=p)
		return find_parent(parent[p]);
	else 
		return parent[p];
}

void union_friend(int a,int b)
{
	if(rank[a]>rank[b])
	{		
		parent[b]=a;
		group[a]++;
		if(group[a]>high)
			high=group[a];
	}
	else
	{		
		parent[a]=b;
		group[b]++;
		if(group[b]>high)
			high=group[b];
		if(rank[a]==rank[b])
			rank[b]++;
	}
}

int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		while(t--)
		{
			init();
			high=1;
			int i,n,m,a,b,pa,pb;
			scanf("%d%d",&n,&m);
			for(i=0;i<m;i++)
			{
				scanf("%d%d",&a,&b);

				pa=find_parent(a);
				pb=find_parent(b);
				if(pa!=pb)
				{
					union_friend(pa,pb);
				}
			}
			printf("%d\n",high);
		}
	}
	return 0;
}