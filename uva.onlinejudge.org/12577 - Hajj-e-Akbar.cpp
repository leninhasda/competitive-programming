// 12577 - Hajj-e-Akbar

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string, char* > mp;
	mp["Hajj"] = "Akbar";
	mp["Umrah"] = "Asghar";
	int cnt=1;
	string str;
	
	while(cin>>str)
	{
		if(str[0] == '*') break;
		printf("Case %d: Hajj-e-%s\n",cnt++, mp[str]);
	}
	
}