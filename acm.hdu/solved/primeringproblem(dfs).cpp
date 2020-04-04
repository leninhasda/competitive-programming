#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int s[21],n;
int used[50];

bool isPrime(int x)
{
	if(x==1)
		return false;
	if(x==2)
		return true;
	int i,to;
	to=(int)(sqrt(long double(x)));
	for(i=2;i<=to;i++)
	{
		if(x%i==0)
		{
			return false;
		}
	}
	return true;
}

int dfs(int r,int idx)
{
	int i=1;
	for(i;i<=n;i++)
	{
		if((i!=r)&&(!used[i])&&(isPrime(i+r)))
		{
			s[idx]=i;
			used[i]=1;
			idx++;
			dfs(i,idx);
			s[idx]=0;
			used[i]=0;
			idx--;
		}
	}
	if((idx==n)&&(s[n-1]!=0)&&(isPrime(s[0]+s[n-1])))
	{
		for(i=0;i<n;i++)
		{
			if(i!=0)
				cout<<" ";
			cout<<s[i];
		}
		cout<<"\n";
	}
	return 0;
}

int main()
{
	int i,cnt=0;

	while(cin>>n)
	{
		cnt++;
		for(i=0;i<21;i++)
		{
			s[0]=0;
			used[0]=0;
		}
		s[0]=1;
		used[1]=1;

		cout<<"Case "<<cnt<<":\n";
		dfs(1,1);
		cout<<"\n";
	}

	return 0;
}