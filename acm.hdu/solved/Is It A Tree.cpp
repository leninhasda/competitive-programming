#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ary[1005][1005];
vector<int> vec,vecp;

void insert(int a)
{
	int i,f=0;
	for(i=0;i<vecp.size();i++)
	{
		if(vecp[i]==a)
		{
			f=1;break;
		}
	}
	if(f==0)
		vecp.push_back(a);
}
void insert(int a,int b)
{
	int i,f=0;
	for(i=0;i<vec.size();i++)
	{
		if(vec[i]==a)
		{
			f=1;break;
		}
	}
	if(f==0)
		vec.push_back(a);
	f=0;
	for(i=0;i<vec.size();i++)
	{
		if(vec[i]==b)
		{
			f=1;break;
		}
	}
	if(f==0)
		vec.push_back(b);
}

int main()
{
	
	int u,v,i,j,num=0;

	while(cin>>u>>v)
	{
		num++;
		if(u<0 && v<0)
			break;
		for(i=0;i<=1000;i++)
			for(j=0;j<=1000;j++)
				ary[i][j]=0;

		ary[u][v]=1;
		insert(u,v);
		insert(u);

		while(cin>>u>>v)
		{
			if(!u && !v)break;
			ary[u][v]=1;
			insert(u,v);
			insert(u);
		}
		sort(vec.begin(),vec.end());
		sort(vecp.begin(),vecp.end());

		int total=0,root=0,tree=1;
		for(i=0;i<vecp.size();i++)
		{
			total = 0;
			for(j=0;j<=1000;j++)
			{
				total += ary[j][vecp[i]];
			}
			if(total==0)
			{
				root++;
			}
		}
		for(i=0;i<vec.size();i++)
		{
			total = 0;
			for(j=0;j<=1000;j++)
			{
				total += ary[j][vec[i]];
			}
			if(total>1)
			{
				tree=0;
			}
		}

		if(root==1 && tree==1)
		{
			int nottree=0;
			for(i=0;i<vec.size();i++)
			{
				for(j=0;j<vec.size();j++)
				{
					if(i==j)continue;
					if(ary[vec[i]][vec[j]]==1 && ary[vec[j]][vec[i]]==1)
					{
						nottree=1;
					}
				}
			}
			if(nottree==1)
				cout<<"Case "<<num<<" is not a tree."<<endl;
			else
				cout<<"Case "<<num<<" is a tree."<<endl;
		}
		else
		{
			cout<<"Case "<<num<<" is not a tree."<<endl;
		}
		root=0;tree=1;
		vec.clear();vecp.clear();
	}
	return 0;
}

/*
		int cnt=0;
		bool notree=false;
		for(j=0;j<=1000;j++)
		{
			cnt=0;
			for(i=0;i<=1000;i++)
			{
				if(ary[i][j]==1)
					cnt++;
			}
			if(cnt>1)
			{
				notree=true;
				break;
			}
		}
		bool root = false;cnt=0;
		for(i=0;i<vec.size();i++)
		{
			cnt=0;
			for(j=0;j<=1000;j++)
			{
				if(ary[j][vec[i]]==1)
				{
					cnt++;
				}
			}
			if(cnt==0)
			{
				root=true;
				break;
			}
		}
		if((notree && !root) || notree)
		{
			cout<<"Case "<<num<<" is not a tree."<<endl;
		}
		else if(!notree && root)
		{
			cout<<"Case "<<num<<" is a tree."<<endl;
		}

  */