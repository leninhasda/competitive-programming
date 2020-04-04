#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

#define mx 105

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

/*
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
		//	visited[node[top].adj[i]] = false;
		}
	}
}
*/

int main()
{
	int n, a, b, t, p, i, k, cnt, top;
	queue<int> s;

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
		{
			cin>>p;
			for(k=0;k<=n;k++)
			{
				visited[k] = false;
				res[k] = false;
			}
			cnt=0;

			/********************/
			//dfs(p);
			s.push(p);
			while(s.empty()==false)
			{
				top = s.front();
				s.pop();
				for(k=0;k<node[top].adj.size();k++)
				{
					if(visited[node[top].adj[k]] == false)
					{
						s.push(node[top].adj[k]);
						visited[node[top].adj[k]] = true;
						cnt++;
					}
				}
			}
			/********************/

		/*	for(k=1;k<=n;k++)
			{
				if(res[k]==false)
					cnt++;
			}*/
			cnt = n-cnt;
			cout<<cnt;
			for(k=1;k<=n;k++)
			{
				if(visited[k]==false)
					cout<<" "<<k;
			}
			cout<<endl;
			while(s.empty()==false)
				s.pop();
		}
	}
	return 0;
}