#include<iostream>
using namespace std;

int main()
{
	int a[100000],ab[10]={1,2,4,8,16,32,64,128,512};
	int n,div,mod,m,i;

	while(cin>>n)
	{
		if(!n)
			break;
		div=0;mod=0;m=0;
		do
		{
			div=n/2;
			mod=n%2;
			a[m]=mod;
			m++;
			n=div;
		}while(div!=0);
		for(i=0;i<m;i++)
		{
			if(a[i]==1)
			{
				cout<<ab[i]<<endl;
				break;
			}
		}
	}

	return 0;
}