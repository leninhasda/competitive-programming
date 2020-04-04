#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

char s[100000000];

int main()
{
	string str;
	int l,f;

	while(gets(s))
	{
		f=0;
		istringstream is(s);
		while(is>>str)
		{
			if(f)printf(" ");
			l=str.length();
			reverse(str.begin(),str.end());
			cout<<str;
			f=1;
		}
		printf("\n");
	}
	
	return 0;
}