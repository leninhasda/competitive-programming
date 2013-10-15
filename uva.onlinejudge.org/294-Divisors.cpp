#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

struct L
{
	long int num,div;
}list[10005];

bool cmp(struct L a, struct L b)
{
	if(a.div >b.div) return true;
	else if(a.div == b.div && a.num < b.num) return true;
	else return false;
}

long int div(long int n)
{
	if(n==1) return 1;

	int cnt=0;

	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		//	cout<<i<<" ";
			if((n/i)!=i)
				cnt+=2;
			else
				cnt++;
		}
	}
//	cout<<endl;
	return (cnt+2);
}

int main()
{
	long int u,l,i,k;
	long int t;

	scanf("%ld",&t);

	while(t--)
	{
		scanf("%ld%ld",&l,&u);

		i=l; k=u;
		int idx=0;

		for(i;i<=k;i++)
		{
			list[idx].num = i;
			list[idx].div = div(i);
			idx++;
		}

		sort(list,list+idx,cmp);

		printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n",l,u,list[0].num,list[0].div);
	}

	return 0;
}
