#include<iostream>
using namespace std;

int main()
{	
	int n,u,d;

	while(cin>>n>>u>>d)
	{
		if(!n)
			break;
		int t=0,i=0;
		while(1)
		{
			i+=u;
			t++;
			if(i>=n)
			{
				break;
			}
			else
			{
				i-=d;
				t++;
			}
		}
		cout<<t<<"\n";
	}

	return 0;
}