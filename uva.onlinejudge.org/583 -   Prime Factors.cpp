//  583 - Prime Factors  

#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

int main()
{
	//freopen("583.txt", "w", stdout);
	
	int n, i;
	bool flag = true, into = true;

	while(scanf("%d", &n) && n)
	{
		i=2; flag = true; into = false;
		
		printf("%d =", n);
		if(n < 0) 
		{
			printf(" -1 x");
			n = n * -1;
		}
		if(n == 2147483647)
		{
			printf(" 2147483647\n");
			continue;
		}
		else
		{
			while(n != 1 && i*i<=n)
			{
				if(n%i == 0)
				{
					if(into)printf(" x");
					printf(" %d", i);
					n = n/i;
					flag = false;
					into = true;
				} 
				else { i++; }
			}
			if(n!=1)
			{
				if(into)printf(" x");
				printf(" %d",n);
			}
			printf("\n");
		}
	}
	
	return 0;
}


