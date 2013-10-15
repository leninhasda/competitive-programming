#pragma warning(disable:4786)
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
	map<string, string> mp;
	string str[105],st1,st2;
//	char ch[5];
	int l,n,i;
	while(scanf("%d%d",&l,&n)==2)
	{
		for(i=0;i<l;i++)
		{
			cin>>st1>>st2;
			mp[st1] = st2;
		}
		for(i=0;i<n;i++)
		{
			cin>>str[i];
		//	cout<<mp[str]<<endl;
			
		}
		for(i=0;i<n;i++)
		{
			if(mp.find(str[i]) == mp.end())
			{
				if(str[i][str[i].length()-1] == 'y')
				{
					if(str[i][str[i].length()-2] == 'a' ||
					   str[i][str[i].length()-2] == 'e' ||
					   str[i][str[i].length()-2] == 'i' ||
					   str[i][str[i].length()-2] == 'o' ||
					   str[i][str[i].length()-2] == 'u' )
						cout<<str[i]<<"s"<<endl;
					else
					{
						str[i].erase(str[i].end()-1);
						cout<<str[i]<<"ies"<<endl;
					}
				}
				else if(str[i][str[i].length()-1] == 'o' || 
					    str[i][str[i].length()-1] == 's' ||
						str[i][str[i].length()-1] == 'x' ||
						(str[i][str[i].length()-1] == 'h' && (str[i][str[i].length()-2] == 'c' || str[i][str[i].length()-2] == 's')))
				{
					cout<<str[i]<<"es"<<endl;
				}
				else
					cout<<str[i]<<"s"<<endl;
			}
			else
				cout<<mp[str[i]]<<endl;
		}
	}
	return 0;
}