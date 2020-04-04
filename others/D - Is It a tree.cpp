#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	
	int u,v,i,j,idx=0,num=0,a[10000],b[10000];

	while(cin>>u>>v)
	{
		if(u<0 && v<0)
			break;
		for(i=0;i<=10000;i++)
		{
			a[i]=0;b[i]=0;
		}

		num=1;
		idx=0;
		a[idx]=u;
		b[idx]=v;
		idx++;

		while(cin>>u>>v)
		{
			if(!u && !v)break;
			a[idx]=u;
			b[idx]=v;
			idx++;			
		}
		//check root
		bool root=true;
		for(i=0;i<idx;i++)
		{
			for(j=0;j<idx;j++)
			{
				if(a[i]==b[j])root = false;
				if(a[i]!=b[j])
				{
					root=true;
					break;
				}
			}
		}
		if(root)
		{
			sort(b,b+idx);
			bool tree=true;
			for(i=1;i<idx;i++)
			{
				if(b[i]==b[i-1])
				{
					tree = false;
					break;
				}
			}
			if(tree)
			{
				cout<<"Case "<<num<<" is a tree."<<endl;
			}
			else
			{
				cout<<"Case "<<num<<" is not a tree."<<endl;
			}
		}
		else
		{
			cout<<"Case "<<num<<" is not a tree."<<endl;
		}
		num++;
	}
	return 0;
}