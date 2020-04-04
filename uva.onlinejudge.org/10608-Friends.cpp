#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define MAX 30005

typedef struct
{
	int a,b;
}friends;
vector<friends> fList;

int parent[MAX],rank[MAX],group[MAX];

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
	}
	else
	{		
		parent[a]=b;
		group[b]++;
		if(rank[a]==rank[b])
			rank[b]++;
	}
}

void mst_friend()
{
	int pa,pb,i;
	for(i=0;i<fList.size();i++)
	{
		pa=find_parent(fList[i].a);
		pb=find_parent(fList[i].b);
		if(pa!=pb)
		{
			union_friend(pa,pb);
		}
	}
}

int main()
{
	int t;
	while(cin>>t)
	{
		while(t--)
		{
			init();
			friends tmp;
			int i,n,m;
			cin>>n>>m;
			for(i=0;i<m;i++)
			{
				cin>>tmp.a>>tmp.b;
				fList.push_back(tmp);
			}
			mst_friend();
			sort(group,group+n+1);
			cout<<group[n]<<endl;
		}
	}
	return 0;
}