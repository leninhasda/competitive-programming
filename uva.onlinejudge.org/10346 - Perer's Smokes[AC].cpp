#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long int n, k;

	while(scanf("%ld %ld",&n,&k)!=EOF)
	{
		int cnt = n,mod;

		while(n >= k)
		{
			mod = n%k;
			n =(n/k);			
			cnt += n;
			n += mod;
		}

		printf("%d\n",cnt);

//		printf("%ld\n",n+((n-1)/(k-1)));
	}

	return 0;
}