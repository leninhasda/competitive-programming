#pragma warning (disable:4786)
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool isX(char ch)
{
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y' || ch=='W' || ch=='H')
		return true;
	else 
		return false;
}

int main()
{
	map<char,int> mp;
	mp['B']=1;mp['P']=1;mp['F']=1;mp['V']=1;
	mp['C']=2;mp['S']=2;mp['K']=2;mp['G']=2;mp['J']=2;mp['Q']=2;mp['X']=2;mp['Z']=2;
	mp['D']=3;mp['T']=3;
	mp['L']=4;
	mp['M']=5;mp['N']=5;
	mp['R']=6;

	string str;
	char input[25];
	
	str.erase(str.begin(),str.end());

	int i,len,cd,cd2;
	char ch;

	for(i=1;i<10;i++)
		cout<<" ";
	cout<<"NAME";
	for(i=1;i<=(35-14);i++)
		cout<<" ";
	cout<<"SOUNDEX CODE\n";

	while(scanf("%s",&input)!=EOF)
	{
		str += input[0];		

		len=strlen(input);

		for(i=1;i<len;i++)
		{
			if(str.length() == 4)
				break;
			if(!isX(input[i]))
			{
				cd = mp[input[i]];
				cd2 = mp[input[i-1]];
				if(cd != 0 && cd != cd2)
				{
					ch = cd+'0';
					str += ch;
				}
			}
		}
		if(str.length() < 4)
		{
			len = 4 - str.length();
			for(i=0;i<len;i++)
				str += '0';
		}

		for(i=1;i<10;i++)
			cout<<" ";
		cout<<input;

		len = strlen(input);
		for(i=1;i<=(25-len);i++)
			cout<<" ";
		cout<<str<<endl;

		str.erase(str.begin(),str.end());
	}

	for(i=1;i<20;i++)
		cout<<" ";
	cout<<"END OF OUTPUT\n";

	return 0;
}
