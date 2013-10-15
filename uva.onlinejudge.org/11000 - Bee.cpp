#include<iostream>
using namespace std;


int main()
{
	long long f1, f2, f3,
		ff1, ff2, ff3,
		t, m, n, i;

	while(scanf("%lld",&n)==1)
	{
		if(n== -1) break; 
		
		f1 = 0; f2 = 1;
		ff1 = 1; ff2 = 0;
		t = 1; m = 0;

		for(i=2;i<=(n+1);i++)
		{
			f3 = f1 + f2;
			ff3 = ff1 + ff2;
			f1 = f2; f2 = f3;
			ff1 = ff2; ff2 = ff3;
		//	m1 = m2; m2 = m3;
			m += ff3; t += f3; 
		//	m -= f3;
		//	printf("f=%d t=%d m=%d\n",f3,t,m);
		}

		printf("%lld %lld\n", m, t);
	}
	return 0;
}
