#include<iostream>
using namespace std;

int main()
{
	char ch,line[200],tmpline[200],ans[200];
	int idx,i,flag,to;
	while(cin>>ch>>line)
	{
		if(ch=='0' && line[0]=='0')
			break;

		idx=0;
		for(i=0;i<strlen(line);i++)
		{
			if(line[i]!=ch)
				tmpline[idx++]=line[i];
		}
		tmpline[idx]='\0';
		flag=0;to=idx;idx=0;
		for(i=0;i<to;i++)
		{
			if(flag==0 && tmpline[i]!=0)
			{
				flag=1;
			}
			if(flag)
			{
				ans[idx++]=tmpline[i];
			}
		}
		ans[idx]='\0';
		for(i=0;i<idx;i++)
		{
			if(ans[i]!='0')
				break;
		}
		if(i==idx)
			cout<<"0"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}