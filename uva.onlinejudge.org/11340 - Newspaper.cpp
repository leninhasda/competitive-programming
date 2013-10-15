#pragma warning (disable:4786)
#include<iostream>
#include<map>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n;
		cin>>n;
		long int i,v;
		map<unsigned char,long int> mp;
		unsigned char ch;
		for(i=0;i<n;i++)
		{
			cin>>ch>>v;
			mp[ch]=v;
		}
		cin>>n;
		char line[10005];
		long int j,tot=0;
		gets(line);
		for(i=0;i<n;i++)
		{
			gets(line);
			for(j=0;j<strlen(line);j++)
			{
				tot += mp[line[j]];
			}
		}
		double ans;
		ans = double(tot)/100.0;
		printf("%.2lf$\n",ans);
	}

	return 0;
}