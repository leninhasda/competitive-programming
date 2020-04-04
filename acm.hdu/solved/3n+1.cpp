#include <iostream>
using namespace std;

int call(int n)
{
	int count=1;
label:if(n==1)
		return count;
	if(n%2==1)
	{
		n=3*n+1;
		count++;
	}
	else
	{
		n=n/2;
		count++;
	}
	goto label;
}

int main()
{
	int i,a,b,n,m,max,min;
	
	while(cin>>a>>b)
	{
		if(a<b)
		{
			n=a;m=b;
		}
		else
		{
			n=b;m=a;
		}
		max=0;
		for(i=n;i<=m;i++)
		{
			min=call(i);
			if(min>max)
			{
				max=min;
			}
		}
		cout<<a<<" "<<b<<" "<<max<<endl;;
	}

	return 0;
}