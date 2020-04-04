#include<iostream>
#include<algorithm>
using namespace std;

int isLeap(int Y)
{
	if((Y%4==0 && Y%100!=0) || Y%400==0)
		return 1;
	else 
		return 0;
}

int main()
{
	int t,i,j,y,n,cnt=0,m;

	while(cin>>t)
	{
		for(i=0;i<t;i++)
		{
			cin>>y>>n;
			for(j=0;j<10;j++)
			{
				if(isLeap(y+j))
				{
					m=y+j;
					break;
				}
			}
			cnt=0;
			for(j=m;;j+=4)
			{
				if(isLeap(j))
					cnt++;
				if(cnt==n)
				{
					break;
				}
			}
			cout<<j<<"\n";
		}
	}

	return 0;
}