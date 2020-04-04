#include<stdio.h>

int main()
{
	int N,i,m,a[1000],j,k;
	
	while(scanf("%d",&N)!=EOF)
	{
		if(N==0)
			break;
		else
		{
			for(i=2;i<N;i++)
			{
				int I=0,flag=0,flag2=1,add=0;
				m=i;
				while(add!=13)
				{
					add += m;
					if(add>N)
						add=add-N;
					a[I]=add;
					I++;
				}
				
				for(j=0;j<I;j++)
				{
					for(k=1;k<=N;k++)
					{
						if(a[j]==k)
						{
							flag=1;
							break;
						}
						else
						{
							flag=0;
							break;
						}
					}
					if(flag==0)
					{
						flag2=0;
						break;	
					}
					
				}
				if(flag2==1)
				{
					printf("%d\n",m);
					break;
				}
			}
		}
	}

	return 0;
}