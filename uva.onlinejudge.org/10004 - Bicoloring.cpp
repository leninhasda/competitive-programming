#include<iostream>
#include<stack>
using namespace std;

#define mx 201

typedef struct
{
	int idx,
		adj[mx],
		color;
}vertex;

int main()
{
	int n, l, a, b, top, color;
	int i;

	bool visited[mx], flag;
	stack<int> s;
	vertex node[mx];

	while(scanf("%d",&n)==1)
	{
		if(!n) break;

		scanf("%d",&l);

		for(i=0;i<=n;i++)
		{
			node[i].idx = node[i].color = 0;
			visited[i] = false;
		}

		for(i=0;i<l;i++)
		{
			scanf("%d%d",&a,&b);
			node[a].adj[node[a].idx++] = b;
			node[b].adj[node[b].idx++] = a;
		}

		color = 1; flag = true;
		s.push(0);
		visited[0] = true;
		node[0].color = color; //assume that (1 = white) and (2 = black)

		while(s.empty()==false)
		{
			top = s.top();
			s.pop();

			if(node[top].color == 1) color = 2;
			else color = 1;

			for(i = 0; i<node[top].idx;i++)
			{
				if(visited[node[top].adj[i]] == false)
				{
					visited[node[top].adj[i]] = true;
					node[node[top].adj[i]].color = color;
					s.push(node[top].adj[i]);
				}
				else if(node[top].color == node[node[top].adj[i]].color)
				{
					flag = false;
				}
			}
			if(!flag) break;
		}

		if(flag)
			printf("BICOLORABLE.\n"); //colorable
		else
			printf("NOT BICOLORABLE.\n");

		while(s.empty() == false)
			s.pop();
	}

	return 0;
}