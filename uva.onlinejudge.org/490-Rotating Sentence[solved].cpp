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
			if(strlen(line[j])>i)	
				cout<<line[j][i];
			else
				cout<<" ";
		}
		cout<<endl;
	}

	return 0;
}