#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

typedef struct
{
	char a,b;
}edge;

vector<edge> list;
char parent[95];
int rank[95];

void init()
{
	for(char ch='A';ch<='Z';ch++)
	{
		rank[ch]=1;
		parent[ch]=ch;
	}
}

char find_parent(char p) 
{
	if(parent[p]!=p)
		return find_parent(parent[p]);
	return parent[p];
}

void union_node(char a,char b)
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
	int t,flag=0;

	while(cin>>t)
	{
		while(t--)
		{
			if(flag)cout<<endl;
			init();
			char n,ab[4],nul[2];
			int idx=0,m;
			cin>>n;
			m=n-'A'+1;
			gets(nul);
			list.clear();
			edge tmp;
			while(gets(ab))
			{
				if(strcmp(ab,"")==0)
					break;
				tmp.a=ab[0];
				tmp.b=ab[1];
				list.push_back(tmp);
			}
			char pa,pb;
			for(int i=0;i<list.size();i++) 
			{
				pa=find_parent(list[i].a); 
				pb=find_parent(list[i].b); 
				if(pa!=pb) 
				{
					union_node(pa,pb); 
					m--;
				}
			}
			cout<<m<<endl;
			flag=1;
		}
	}

	return 0;
}