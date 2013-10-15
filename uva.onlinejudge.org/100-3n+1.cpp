#include<stdio.h>

int main()
{
	long int i,j,tempi,tempc=0,count=0;

	while(scanf("%d %d",&i,&j)==2)
	{
		if(i<j)
		{
			printf("%ld %ld ",i,j);
		}
		else
		{

			printf("%ld %ld ",j,i);
		}
		tempc=0;
		for(i;i<=j;i++)
		{
			tempi=i;
			count=1;
			while(tempi!=1)
			{
				if(tempi%2==1)
				{
					tempi=3*tempi+1;
				}
				else
				{
					tempi=tempi/2;
				}
				count++;
			}
			if(count>=tempc)
			{
				tempc=count;
			}
		}
		printf("%ld\n",tempc);
	}
	return 0;
}