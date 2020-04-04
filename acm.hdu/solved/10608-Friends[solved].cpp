#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 30005

int parent[MAX],rank[MAX],high=0;

void init()
{
	for(int i=0;i<MAX;i++)
	{
		rank[i]=1;
		parent[i]=i;
	}
}

int find_parent(int p)
{
	if(parent[p]!=p)
		return parent[p]=find_parent(parent[p]);
	else 
		return parent[p];
}

void union_friend(int a,int b)
{
	if(rank[a]>rank[b])
	{		
		parent[b]=a;
		rank[a]=rank[b]+=rank[a];
		if(rank[a]>high)
			high=rank[a];
	}
	else
	{		
		parent[a]=b;
		rank[b]=rank[a]+=rank[b];
		if(rank[b]>high)
			high=rank[b];
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		init();
		high=0;
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
	return 0;
}