#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

bool srt(int a, int b)
{
	if(a>b)
		return true;
	else
		return false;

	return false;
}

int main()
{
	long long ary[50],ans;
	int t,a,j;
	while(cin>>t)
	{
		while(t--)
		{
			int i=0;
			while(cin>>a)
			{
				if(!a)
					break;
				ary[i++]=a;
			}
			
			sort(ary,ary+i,srt);

			ans = 0;
			for(j=0;j<i;j++)
			{
				ans += 2*pow(1.0*ary[j],1.0*j+1);
				if(ans>5000000)
				{
					break;
				}
			}
			
			if(ans<=5000000)
				printf("%lld\n",ans);
			else
				printf("Too expensive\n");
		}		
	}
	return 0;
}