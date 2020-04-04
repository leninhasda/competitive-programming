#include<iostream>
using namespace std;

#define size 10

int graph[size][size];
int used[10];

int dfs(int top=1)
{
	int j,cnt=0;
	used[top]=1;
	cout<<top<<" ";
	for(j=1;j<=8;j++)
	{
		if(graph[top][j]==1 && used[j]==0)
		{
			cnt++;
			cnt+=dfs(j);
		}
	}
	return cnt;
}

int main()
{
	int i,j;
	
	int n,m,x,y;
	while(cin>>n>>m)
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				graph[i][j]=0;
			}
		}
		for(i=0;i<10;i++)
			used[i]=0;
		
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			graph[x][y]=1;
			graph[y][x]=1;
		}

		cout<<"\n"<<dfs(m)+1<<endl;
	}
	return 0;
}
