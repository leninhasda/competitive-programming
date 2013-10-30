// 11616 - Roman Numerals
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	map<char, int> mp;
	string str;
	mp['I'] = 1; mp['V'] = 5; mp['X'] = 10; mp['L'] = 50; mp['C'] = 100;
	mp['D'] = 500; mp['M'] = 1000;

	char line[500], ch[]={"MDCLXVI"},er;
	int i, len, num, div, in;
	bool flag;

	while(gets(line))
	{
		if(line[0] >= '0' && line[0] <= '9')
		{
			//cout<<"debug:"<<endl;
			// to roman
			sscanf(line, "%d", &num);
			in=0; str.erase(str.begin(), str.end());
			//cout<<num<<endl;
			while(num)
			{
				div = num/mp[ch[in]];
				if(div == 0) 
				{
					in++;
					continue;
				}
				else if(div<4)
				{
					for(i=0;i<div;i++)
						str+=ch[in];
					num-=(div*mp[ch[in]]);
					in++;
				}
				else
				{
					len = str.length();
					flag = false;
					if(len && str[len-1] == ch[in-1])
					{
						str.erase(str.end()-1);
						flag = true;
					}
					num-=(div*mp[ch[in]]);
					str+=ch[in];
					if(flag)
					{
						str+=ch[in-2];
					}
					else str+=ch[in-1];
					in++;
				}
			}
			cout<<str<<endl;
		}
		else
		{
			// to arabic
			len = strlen(line); num=0;
			for(i = len-1; i>=0;i--)
			{
				if(i < (len-1))
				{
					if(mp[line[i]] < mp[line[i+1]]) num-=mp[line[i]];
					else num+=mp[line[i]];
				}
				else num+=mp[line[i]];
			}
			printf("%d\n", num);
		}
	}

	return 0;
}