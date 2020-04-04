#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a[10005],i;
	while(cin>>n)
	{
		for(i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+i);
		cout<<a[i/2]<<endl;
	}
	return 0;
}