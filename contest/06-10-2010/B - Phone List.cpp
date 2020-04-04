#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int t,n,i,j;	

	while(cin>>t)
	{
		while(t--)
		{
			string str[10005];

			cin>>n;
			for(i=0;i<n;i++)
			{
				cin>>str[i];				
			}
			sort(str,str+n);
			bool con=true;
			for(i=1;i<n;i++)
			{
				bool same=false;
				if(str[i-1].length() > str[i].length())continue;
				for(j=0;j<str[i-1].length();j++)
				{
					if(str[i-1][j] == str[i][j])
						same=true;
					else
					{
						same =false; break;
					}
				}
				if(same)
					con=false;
			}
			if(con)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}

	return 0;
}