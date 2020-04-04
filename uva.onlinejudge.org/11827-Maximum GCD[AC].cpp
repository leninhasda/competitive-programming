#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

int gcd(int a,int b) 
{
	if (a%b==0) 
		return b; 
	else 
		return gcd(b,a%b);
}

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
	int t,a,ary[105],i,j,idx,rdx,arry[105];
	char line[1000000],ch[5];

	while(cin>>t)
	{
		gets(ch);
		while(t--)
		{
			gets(line);
			idx=0;
			istringstream is(line);
			while(is>>a)
			{
				ary[idx++]=a;
			}
			rdx=0;
			for(i=0;i<idx-1;i++)
			{
				for(j=i+1;j<idx;j++)
				{
					arry[rdx++]=gcd(ary[i],ary[j]);
				}
			}
			sort(arry,arry+rdx,srt);

			cout<<arry[0]<<endl;
		}		
	}
	return 0;
}