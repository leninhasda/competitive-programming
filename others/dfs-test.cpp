// DFS test

#include<iostream>
#include<stack>
using namespace std;

#define mx 105

int main()
{
	int ar[mx][mx], v[mx],ans[mx], i, k, n, a, b,from, top, t;
	bool flag;
	for(i=0;i<mx;i++)
		for(k=0;k<mx;k++)
			ar[i][k] = 0;
	for(i=0;i<mx;i++)
		v[i]=0;
	
	cin>>n;

	a = b = 0;
	while(cin>>a)
	{
		if(!a)
			break;
		while(cin>>b)
		{
			if(!b)
				break;
			ar[a][b] = 1;
			a = b;
		}
	/*	while(cin>>a>>b && a &&b)
		{
		ar[a][b] = 1;
		ar[b][a] = 1;}*/
	}

	cin>>t;
	for(i=0;i<t;i++)
		cin>>ans[i];

	stack<int> s;

	for(i=0;i<t;i++)
	{
		while(!s.empty())
			s.pop();
		for(k=0;k<=n;k++)
			v[k]=0;

		s.push(ans[i]);
		
		while(!s.empty())
		{
			top = s.top();
			v[top] = 1;
		//	cout<<top<<" -> ";
			
			flag = true;
			for(k=1;k<=n;k++)
			{
				if(ar[top][k] && !v[k])
				{
					flag = false;
					s.push(k);
					break;
				}
			}
			if(flag)
				s.pop();
		}
		//cout<<endl;
		for(k=1;k<=n;k++)
			if(!v[k])
				printf("%d ",k);

		cout<<endl;
	}

	return 0;
}