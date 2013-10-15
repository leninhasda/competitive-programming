#include<iostream>
#include<stack>
#include<queue>
using namespace std;

typedef struct
{
	int idx, adj[105];
}vertex;

int main()
{
	int n, a, b, t, src, top, cnt;
	int i, k;
	bool visited[105];

	int aftr, check, befr, flag;

	vertex node[105];
	stack<int> s;
//	queue<int> s;

	while(scanf("%d",&n)==1)
	{
		if(!n) break;

		for(i=0;i<=n;i++)
			node[i].idx = 0;
		
		/* your input system 
		befr=-1;
		flag=1;
		check=0;
		while(scanf("%d",&aftr)==1)
		{
			if(check==0&&aftr==0)
			{
				break;
			}
			else
			{
				check=1;
			}
			if(flag==0&&aftr==0)
			{
				break;
			}
			if(aftr==0)
			{
				befr=-1;
				flag=aftr;
				continue;
			}
			if(befr==-1)
			{
				flag=1;
				befr=aftr;
			}
			else
			{
				node[befr].adj[node[befr].idx++]=aftr;
				flag=1;
			}
		}*/
		/* my input system */
		
		while(scanf("%d",&a)==1)
		{
			if(!a) break;

			while(scanf("%d",&b)==1)
			{
				if(!b) break;

				node[a].adj[node[a].idx++] = b;
				a = b;
			}
		}
		// checking inputed data ...
		/*
		for(i=1;i<=n;i++)
		{
			cout<<i<<"::";
			for(k=0;k<node[i].idx;k++)
				cout<<" "<<node[i].adj[k];
			cout<<endl;
		}
		*/

		scanf("%d",&t);

		for(i=0;i<t;i++)
		{
			scanf("%d",&src);

			for(k=0;k<=n;k++)
				visited[k]=false;

			s.push(src);
			cnt = 0;

			while(s.empty()==false)
			{
				top = s.top();
				s.pop();

				for(k=0;k<node[top].idx;k++)
				{
					if(visited[node[top].adj[k]] == false)
					{
						visited[node[top].adj[k]] = true;
						s.push(node[top].adj[k]);
						cnt++;
					}
				}
			}

			printf("%d",(n-cnt));

			for(k=1;k<=n;k++)
			{
				if(visited[k] == false)
					printf(" %d", k);
			}

			printf("\n");

			while(s.empty()==false)
				s.pop();
		}

	}

	return 0;
}