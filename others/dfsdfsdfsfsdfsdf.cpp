#include<iostream>
#include<vector>
using namespace std;

#define mx 101

int node[mx][mx], n;
bool visited[mx];
vector<int> res;

void dfs(int top)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==false && node[top][i]==1)
		{
			visited[i] = true;
			res.push_back(i);
			dfs(i);
			visited[i] = false;
		}
	}
}

int main()
{
	int a, b, t, p[mx], i, k;//, cnt;

	while(cin>>n)
	{
		if(!n) break;
		for(i=1;i<=n;i++)
			for(k=1;k<=n;k++)
				node[i][k]=0;

		while(cin>>a)
		{
			if(!a) break;
			while(cin>>b)
			{
				if(!b) break;
				node[a][b] = 1;
				a = b;
			}
		}
		cin>>t;
		for(i=0;i<t;i++)
			cin>>p[i];
		for(i=0;i<t;i++)
		{
			for(k=0;k<=n;k++)
			{
				visited[k] = false;
			}
			res.clear();
		//	cnt=0;
			dfs(p[i]);

			cout<<res.size();
			for(k=0;k<res.size();k++)
			{
			//	if(res[k]==false)
					cout<<" "<<res[k];
			}
			cout<<endl;
		}
	}
	return 0;
}

/*
typedef struct 
{
	vector<int> adj;
}vtx;

bool find(vtx v, int value)
{
	for(int i=0;i<v.adj.size();i++)
		if(v.adj[i]==value)
			return true;
	return false;
}

vtx node[mx];
bool visited[mx], res[mx];

void dfs(int top)
{
	int i,s = node[top].adj.size();
	for(i=0;i<s;i++)
	{
		if(visited[node[top].adj[i]]==false)
		{
			visited[node[top].adj[i]] = true;
			res[node[top].adj[i]] = true;
			dfs(node[top].adj[i]);
			visited[node[top].adj[i]] = false;
		}
	}
}

int main()
{
	int n, a, b, t, p[mx], i, k, cnt;

	while(cin>>n)
	{
		if(!n) break;
		for(i=0;i<mx;i++)
			node[i].adj.clear();

		while(cin>>a)
		{
			if(!a) break;
			while(cin>>b)
			{
				if(!b) break;
				if(find(node[a], b) == false)
					node[a].adj.push_back(b);
				a = b;
			}
		}
		cin>>t;
		for(i=0;i<t;i++)
			cin>>p[i];
		for(i=0;i<t;i++)
		{
			for(k=0;k<=n;k++)
			{
				visited[k] = false;
				res[k] = false;
			}
			cnt=0;
			dfs(p[i]);

			for(k=1;k<=n;k++)
			{
				if(res[k]==false)
					cnt++;
			}
			cout<<cnt;
			for(k=1;k<=n;k++)
			{
				if(res[k]==false)
					cout<<" "<<k;
			}
			cout<<endl;
		}
	}
	return 0;
}*/