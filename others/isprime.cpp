#include<iostream>
#include<math.h>
using namespace std;

int prime(int x)
{
	int i,flag=1;
	int to=int(sqrt(long double(x)));
	for(i=2;i<=to;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,z,cnt=0;

	while(cin>>n)
	{
		if(n<=0)
			break;
		cnt++;
		if(n==1 || n== 2)
		{
			cout<<cnt<<": no"<<endl;
			continue;
		}
		z=prime(n);
		if(z==1)
			cout<<cnt<<": yes"<<endl;
		else
			cout<<cnt<<": no"<<endl;

	}

	return 0;
}