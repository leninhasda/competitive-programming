#include<iostream>
using namespace std;

#define mxs 1200
#define mx 5001

struct A
{
	int fib[mxs];
}all[mx];

void init()
{
	int i,k;

	for(i=0;i<mx;i++)
	{
		for(k=0;k<mxs;k++)
			all[i].fib[k] = 0;
	}
	all[1].fib[0] = 1;
}

void bigFib()
{
	init();

	int i=2,k;
	int cr,sum;

//	for(i=2;i<mx;i++)
	for(i=2;i<mx;i++)
	{
		cr = sum = 0;
		for(k=0;k<mxs;k++)
		{
			sum = cr + all[i-1].fib[k] + all[i-2].fib[k];
			cr = sum / 10;
			sum = sum % 10;
			all[i].fib[k] = sum;
		}
	/*	if(cr)
		{
			all[i].fib[k] = cr;
		}*/
	}

}

int main()
{
	bigFib();
//	init();

	int i,k;

//	for(i=0;i<10;i++)
	while(scanf("%d",&i)==1)
	{
		printf("The Fibonacci number for %d is ",i);
		for(k=mxs-1;k>0;k--)
		{
			if(all[i].fib[k])
				break;
		}
		for(k;k>=0;k--)
			printf("%d",all[i].fib[k]);

		printf("\n");
	}
	return 0;
}