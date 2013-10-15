#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,i;

	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			int a[3];
			cin>>a[0]>>a[1]>>a[2];
			sort(a,a+3);
			cout<<"Case "<<i+1<<": "<<a[1]<<"\n";
		}
	}	

	return 0;
}