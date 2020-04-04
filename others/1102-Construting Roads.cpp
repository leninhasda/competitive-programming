#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define max 105

typedef struct{
	int a,b;
	int cost;
}edge;

vector<edge> list;
int parent[max], rank[max];

bool operator<(edge a, edge b)
{
	if(a.cost<b.cost)return true;
	else return false;
}

void init()
{
	for(int i=0;i<max;i++)
	{
		parent[i]=i;
		rank[i]=1;
	}
}

int find_parent(int p)
{
	if(parent[p]!=p)
		return find_parent(parent[p]);
	return parent[p];
}

void union_node(int a,int b)
{
	if(rank[a]>rank[b])
		parent[b]=a;
	else
	{
		parent[a]=b;
		if(rank[a]==rank[b])
			rank[b]++;
	}
}

int main()
{
	int ary[max][max],tmp[max][max];
	int n;
	while(cin>>n)
	{
		int i,j;
		edge node;
		list.clear();
		init();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>ary[i][j];
				tmp[i][j]=1;
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(tmp[i][j] && tmp[j][i] && ary[i][j])
				{
					node.a=i;
					node.b=j;
					node.cost=ary[i][j];
					tmp[i][j]=0;
					tmp[j][i]=0;
					list.push_back(node);
				}
			}
		}

		sort(list.begin(),list.end());

		int m;
		cin>>m;
		while(m--)
		{
			int a,b;
			cin>>a>>b;
			parent[a-1]=b-1;
			rank[b-1]++;
		}

		int pa,pb,cost=0;
		for(i=0;i<list.size();i++)
		{
			pa=find_parent(list[i].a);
			pb=find_parent(list[i].b);
		
			if(pa!=pb)
			{
				union_node(pa,pb);
				cost+=list[i].cost;
			}
		}

		cout<<cost<<endl;
	}
	return 0;
}