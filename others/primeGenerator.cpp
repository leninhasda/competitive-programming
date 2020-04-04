#include<iostream>
#include<vector>
using namespace std;

vector<int> v;
vector<int>::iterator it;
#define sz 16005
int u[sz]={0};

int gPrime()
{	
	int i,k;
	
	u[1]=1;
	u[2]=1;

	for(i=4;i<sz;i+=2)
	{
		u[i]=1;	
	}
	for(i=3;i<sz;i+=2)
	{
		if(u[i]==0)
		{
			v.push_back(i);
			for(k=i*i;k<sz;k+=(2*i))
			{
				u[k]=1;
			}
		}
	}
	return 0;
}

int main()
{
	gPrime();
	int n,s=v.size(),cnt=0;

	while(cin>>n)
	{
		if(n<=0)
			break;
		cnt++;
		if(u[n]==0)
			cout<<cnt<<": yes"<<endl;
		else
			cout<<cnt<<": no"<<endl;

	}

	return 0;
}