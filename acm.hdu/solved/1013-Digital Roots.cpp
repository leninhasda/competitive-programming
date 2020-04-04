#include<iostream>
using namespace std;

int main()
{
       __int64 i,sum;
	   char line[1000];
       while(cin>>line)
       {
		    if(strlen(line)==1 && line[0]=='0')
				break;
			if(strlen(line)==1)
				cout<<line<<"\n";
			else
			{
				sum=0;
				while(strlen(line)!=1)
				{
					for(i=0;i<strlen(line);i++)
					{
						sum=sum+(line[i]-'0');
					}
					sprintf(line,"%I64d",sum);
					sum=0;
				}
				cout<<line<<"\n";
			}
       }

       return 0;
}