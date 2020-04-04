#include<stdio.h>

#define MAX 5000

int main()
{
	unsigned long long n,I,x=0,y=0,z=0;

	while(scanf("%llu",&n) != EOF)
	{
		if(n<= MAX)
		{
			if(n==0)
			{
				y=0;
			}
			else
			{
				x=0;y=1;z=0;
				for(I=0;I<(n-1);I++)
				{
					z=x+y; x=y; y=z;
				}
			}
			printf("The Fibonacci number for %llu is %llu\n",n,y);
		}
	}
		
	return 0;
}