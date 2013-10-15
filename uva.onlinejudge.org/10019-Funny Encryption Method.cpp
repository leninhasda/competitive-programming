#include<iostream>
#include<string>
using namespace std;

int dtob(int d)
{
	int div,mod,ary[1000],idx=0;
	do
	{
		mod=d%2;
		div=d/2;
		ary[idx++]=mod;
		d=div;
	}while(d!=0);
	int j;
	int cnt=0;
	for(j=0;j<idx;j++)
	{
		if(ary[j]==1)
			cnt++;
	}
	return cnt;
}

int htob(int d)
{
	char tmp[1000],tmpans[1000];
	sprintf(tmp,"%d",d);
	int i,j,idx=0,cnt=0;
	char b[][5]={{"0000"},{"0001"},{"0010"},{"0011"},{"0100"},{"0101"},{"0110"},{"0111"},{"1000"},{"1001"}};
	for(i=0;i<strlen(tmp);i++)
	{
		for(j=0;j<5;j++)
		{			
			tmpans[idx++]=b[tmp[i]-48][j];
		}
	}
	tmpans[idx]='\0';
	for(i=0;i<idx;i++)
	{
		if(tmpans[i]=='1')
			cnt++;
	}
	return cnt;
}
int main()
{
	int t,in,decb,hexb;

	while(cin>>t)
	{
		while(t--)
		{
			cin>>in;

			decb=dtob(in);
			hexb=htob(in);
			cout<<decb<<" "<<hexb<<endl;
		}
	}
	return 0;
}