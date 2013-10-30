// 11530 - SMS Typing
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char, int> mp;
	char ch; int n;
	for(ch = 'a', n = 1; ch <= 'o'; ch++)
	{
		mp[ch] = n;
		n++;
		if(n>3)n=1;
	}
	for(ch = 'p', n = 1; ch <= 's'; ch++)
	{
		mp[ch] = n;
		n++;
		if(n>4)n=1;
	}
	for(ch = 't', n = 1; ch <= 'v'; ch++)
	{
		mp[ch] = n;
		n++;
		if(n>3)n=1;
	}
	for(ch = 'w', n = 1; ch <= 'z'; ch++)
	{
		mp[ch] = n;
		n++;
		if(n>4)n=1;
	}
	mp[' '] = 1;

	char line[105];
	int cnt, t, cs, len, i;

	sscanf(gets(line), "%d", &t);
	for(cs=1;cs<=t;cs++)
	{
		gets(line);
		len = strlen(line);
		cnt = 0;
		for(i=0;i<len;i++)
		{
			cnt += mp[line[i]];
		}
		printf("Case #%d: %d\n", cs, cnt);
	}

	return 0;
}