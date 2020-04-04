#include<iostream>
using namespace std;
int nn[505][505],n;
struct
{
	int a,b;
}list[501];

int clear()
{
	int i,j;
	for(i=0;i<505;i++)
	{
		for(j=0;j<505;j++)
			nn[i][j]=0;
	}
	return 0;
}

int fix(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		nn[i][i]=1;
	}
	return 0;
}

int dfs(int i,int m)
{
	int p=1;
	for(i;i<=n;i++)
	{
		if(list[i].a=p)
		{
			nn[m][list[i].b]=1;
			dfs(list[i].b,i+1);
		}
	}
	return 0;
}

int main()
{
	int t,i,j,k,m,cnt;

	while(cin>>t)
	{
		for(i=0;i<t;i++)
		{
			cin>>n>>m;
			clear();
			fix(n);
			for(j=0;j<m;j++)
			{
				cin>>list[j].a>>list[j].b;
			}
			for(j=1;j<=n;j++)
			{
				nn[list[j].a][list[j].b]=1;
				nn[list[j].b][list[j].a]=1;
				dfs(list[j-1].b,j);
			}
			cnt=0;
			for(j=1;j<=n;j++)
			{
				for(k=1;k<=n;k++)
				{
					cout<<nn[j][k]<<" ";
					if(nn[j][k]==0)
						cnt++;
				}
				cout<<"\n";
			}
			cout<<"DONE\n";
			cout<<cnt/2<<"\n";
		}
	}
	return 0;
}