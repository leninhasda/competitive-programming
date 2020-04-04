#include<iostream>
#include<vector>
using namespace std;

vector<int> pr;

void sieve()
{
	bool p[1001];
	memset(p,true,sizeof(p));

	int i,k;
	for(i=4;i<=1000;i+=2)
		p[i] = false;

	pr.push_back(1);
	for(i=2;i<=1000;i++)
	{
		if(p[i])
		{
			pr.push_back(i);
			for(k = i*i;k<=1000;k+=i)
				p[k] = false;
		}
	}
}

int main()
{
	sieve();
	
	int n,c,cnt,e,i,s = pr.size();//,fl=0;

	while(scanf("%d%d",&n,&c)==2)
	{
		cnt = 0;

		for(i=0;i<s;i++)
		{
			if(pr[i] <= n)
				cnt++;
		}
		if(cnt%2==0)
		{
			i = ( cnt - (c*2) ) / 2;
			e = i + (c*2);
		}
		else
		{
			i = ( cnt - ((c*2) - 1)) /2;
			e = i + ((c*2) - 1);
		}

		if(i<0)
		{
			i=0;
			e=cnt;
		}
		
		printf("%d %d:",n,c);

		for(i;i<e;i++)
			cout<<" "<<pr[i];

		printf("\n\n");

	/*	if(fl)
			printf("\n");
		fl = 1; */
	}

	return 0;
}