#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<stack>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<list>
#include<cstdlib>
#include<sstream>
#include<utility>
using namespace std;

class adj
{
public:
	int id,arr[200];
}nd[101];
bool visited[101];

int main()
{
	int n,befr,aftr,i,num,s,top,cnt,j,flag,k,check;
	queue<int> q;
	while(scanf("%d",&n)==1&&n)
	{	
		for(i=0;i<=n;i++)
		{
		//	visited[i]=false;
			nd[i].id=0;
		}
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
				nd[befr].arr[nd[befr].id++]=aftr;
				flag=1;
			}
		}
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			scanf("%d",&s);
			for(k=0;k<=n;k++)
			{
				visited[k]=false;
			//	nd[i].id=0;
			}
			q.push(s);
		//	visited[s]=true;
			cnt=0;
			while(q.empty()==false)
			{
				top=q.front();
				q.pop();
				for(j=0;j<nd[top].id;j++)
				{
					if(visited[nd[top].arr[j]]==false)
					{
						q.push(nd[top].arr[j]);
						visited[nd[top].arr[j]]=true;
						cnt++;
					}
				}
			}
			cnt=n-cnt;
			printf("%d",cnt);
			for(j=1;j<=n;j++)
			{
				if(visited[j]==false)
				{
					printf(" %d",j);
				}
			}
			printf("\n");
			while(q.empty()==false)
			{
				q.pop();
			}
		}
	}
	return 0;
}