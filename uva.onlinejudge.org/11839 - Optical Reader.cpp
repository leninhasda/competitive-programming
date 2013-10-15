#include<iostream>
#include<algorithm>
using namespace std;

bool srt(int a, int b)
{
	if(a<b)
		return true;
	else
		return false;

	return false;
}

int main()
{
	int t,a,ary[6],tmpary[6],cnt,i;
	char ans[5]={'A','B','C','D','E'};

	while(cin>>t)
	{
		if(!t)
			break;
		while(t--)
		{
			for(i=0;i<5;i++)
			{
				cin>>a;
				ary[i]=a;
				tmpary[i]=a;
			}
			sort(ary,ary+5,srt);
			
			cnt=0;
			for(i=0;i<5;i++)
			{
				if(ary[i]<=127)
					cnt++;
			}
			if(cnt>1 || cnt==0)
				cout<<"*"<<endl;
			else
			{
				for(i=0;i<5;i++)
				{
					if(tmpary[i]==ary[0])
					{
						cout<<ans[i]<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}