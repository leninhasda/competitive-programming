#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	char a[15],res[15];
	int aa,bb,p,ans;

	while(cin>>a>>bb)
	{
		aa = a[strlen(a)-1]-'0';
		if(bb==1 || aa==1)
		{
			cout<<aa<<endl;
		}
		else
		{
			
			p=bb%4;
			if(p==0)
			{
				ans=pow(aa*1.0,4*1.0);
			}
			else
			{
				ans=pow(aa*1.0,p*1.0);
			}
			sprintf(res,"%d",ans);
			cout<<res[strlen(res)-1]<<endl;

		}
	}
	return 0;
}