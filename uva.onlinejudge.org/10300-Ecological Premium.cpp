#include<iostream>
using namespace std;

struct
{
	int s,a,e;
}l[100000];

int main()
{	
	int n,i,f,j,sum;

	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>f;
			
			for(j=0;j<f;j++)
			{
				cin>>l[j].s>>l[j].a>>l[j].e;
				
				l[j].a=0;
				l[j].a=l[j].s*l[j].e;
			}
			sum=0;
			for(j=0;j<f;j++)
				sum += l[j].a;
			cout<<sum<<"\n";
		}		
	}

	return 0;
}