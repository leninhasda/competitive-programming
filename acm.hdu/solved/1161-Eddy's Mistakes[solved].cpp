#include<iostream>
using namespace std;

int main()
{
	char line[1005],ch;
	while(gets(line))
	{
		for(int i=0;i<strlen(line);i++)
		{
			if(isalpha(line[i]))
			{
				ch=tolower(line[i]);
				cout<<ch;
			}
			else
				cout<<line[i];
		}
		cout<<endl;
	}
	return 0;
}