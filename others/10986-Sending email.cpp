#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct edge
{
	char a, b;
	int cost;
}edge;

vector<edge> list;

bool operator<(edge a, edge b)
{
	if(a.cost<b.cost)
		return true;
	else
		return false;
}

int parent[91];
int rank[91];

void initial()
{
	for(int i=65;i<91;i++)
	{
		rank[i]=1;
		parent[i]=i;
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
	int t;
	while(cin>>t && t)
	{
		initial();
		int i,totalcost=0;
		--t;
		edge tmp;
		while(t--)
		{
			char a,b;
			int n,cost;
			cin>>a>>n;
			for(i=0;i<n;i++)
			{
				cin>>b>>cost;
				tmp.a=a;
				tmp.b=b;
				tmp.cost=cost;
				totalcost+=cost;
				list.push_back(tmp);
			}
		}		
		sort(list.begin(),list.end());

		// mst starts
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
		list.clear();
	}
	return 0;
}