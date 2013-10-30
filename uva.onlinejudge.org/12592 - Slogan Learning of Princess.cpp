// 12592 - Slogan Learning of Princess

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<map>
using namespace std;

int main()
{
	map<string, string> mp;
	string tmp[2];
	int t,i,n;
	char part[2][110];
	sscanf(gets(part[0]), "%d", &t);
	while(t--)
	{
		gets(part[0]);
		gets(part[1]);
		tmp[0] = part[0]; tmp[1] = part[1];
		mp[tmp[0]] = tmp[1];
	}
	sscanf(gets(part[0]), "%d", &n);
	while(n--)
	{
		gets(part[0]);
		tmp[0] = part[0];// tmp[1] = part[1];
		cout<<mp[tmp[0]]<<endl;// = tmp[1];
	}
}
