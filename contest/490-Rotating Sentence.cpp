#include<iostream>
using namespace std;

int main()
{
	char line[105][105];
	int in=0,i,j,maxlen=0;

	while(gets(line[in]))
	{
		if(strlen(line[in])>maxlen)
			maxlen = strlen(line[in]);
		in++;
	}

	for(i=0;i<maxlen;i++)
	{
		for(j=in-1;j>=0;j--)
		{
			if(line[j][i]>=32 && line[j][i]<=126)
				cout<<line[j][i];
		}
		cout<<endl;
	}

	return 0;
}