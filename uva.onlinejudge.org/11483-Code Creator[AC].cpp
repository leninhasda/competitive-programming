#include<iostream>
using namespace std;

void print_head()
{
	cout<<"#include<string.h>"<<endl;
	cout<<"#include<stdio.h>"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
}

void print_foot()
{
	cout<<"printf(\"\\n\");"<<endl;
	cout<<"return 0;"<<endl;
	cout<<"}"<<endl;
}

int main()
{
	char line[105][105];
	int N,i=0,cnt=1;
	char ch, chr[105];
	
	while(cin>>N)
	{
		if(!N)
			break;
		
		for(i=0;i<N;i++)
		{
			cin>>ch;
			cin.getline(chr,100);
			
			sprintf(line[i],"%c%s",ch,chr);
		}
		
		cout<<"Case "<<cnt++<<":"<<endl;

		print_head();
		
		for(i=0;i<N;i++)
		{
			cout<<"printf(\"";
			for(int j=0;j<strlen(line[i]);j++)
			{
				if(line[i][j]==34)
					cout<<char(92);
				if(line[i][j]==92)
					cout<<char(92);
				cout<<line[i][j];
			}
			cout<<"\\n\");"<<endl;
		}

		print_foot();
	}

	return 0;
}