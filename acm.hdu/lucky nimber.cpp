#include<iostream>
using namespace std;

int main()
{
	int i,j,t,n,ans,len;
	char a[100000];

	while(cin>>t)
	{
		for(i=0;i<t;i++)
		{
			cin>>n;
			if(n%8==0)
			{
				cout<<"Lucky number!"<<endl;
				continue;
			}
			sprintf(a,"%d",n);
			len=strlen(a);
			ans=0;
			{				
				for(j=0;j<len;j++)
				{
					ans += int(a[j])-48;
				}
				if(ans%8==0)
				{
					cout<<"Lucky number!"<<endl;
					continue;
				}
			}
			ans=0;
			{				
				for(j=0;j<len;j++)
				{
					ans += (int(a[j])-48)*(int(a[j])-48);
				}
				if(ans%8==0)
				{
					cout<<"Lucky number!"<<endl;
					continue;
				}
			}
			cout<<"What a pity!"<<endl;
		}
	}

	return 0;	
}