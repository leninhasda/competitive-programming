// 10226

#pragma warning(disable:4786)
#include<iostream>
#include<stdio.h>
#include<string>
#include<cstring>
#include<map>
using namespace std;

int main()
{
	int n, cnt, flag=0;
	char s[2], str[32];

	map<string, int> mp;
	map<string, int>::iterator it;

	scanf("%d",&n);
	gets(s); gets(s);

	while(n--)
	{
		cnt = 0;
	//	flag = 0;
		mp.clear();

		if(flag)
			printf("\n");
		flag = 1;

		while(gets(str))
		{
			if(strlen(str)==0 || strcmp(str,"")==0) 
				break;
			cnt++;

			if(mp.find(str) == mp.end())
				mp[str] = 1;
			else
				mp[str]++;
		}
		//cout<<cnt<<endl;

		for(it = mp.begin(); it != mp.end(); it++)
		{
			printf("%s %.4lf\n", (it->first).c_str(), ((it->second) * 100.0)/cnt);
		//	printf("%s", (it->first).c_str());
		//	printf(" %lf\n", ((it->second)*1.0));
		}
	}

	return 0;
}