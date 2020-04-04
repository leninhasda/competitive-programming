#include<stdio.h>
#include<string.h>
#include<math.h>

struct dtail
{
	char name[15];
	int amount;
	int numtg;
	char given[10][15];
	int give;
	int recive;
	double parcent;
	int total;
}tail[100];

int main()
{
	int n,I,J,K;
	char a[10][15];
	
	while(scanf("%d",&n)!=EOF)
	{
		int cmp,com;
		for(I=0;I<n;I++)
		{	
			scanf("%s",&a[I]);
		}
		for(I=0;I<n;I++)
		{
			scanf("%s",&tail[I].name);
			scanf("%d",&tail[I].amount);
			scanf("%d",&tail[I].numtg);
			
			tail[I].parcent=0;
			tail[I].recive=0;
			tail[I].total=0;

			for(J=0;J<tail[I].numtg;J++)
			{
				scanf("%s",&tail[I].given[J]);
			}
		}
		
		for(I=0;I<n;I++)
		{
			cmp=strcmp(a[I],tail[I].name);
			if(cmp==0)
			{
				tail[I].give=tail[I].amount;				
				tail[I].parcent=tail[I].amount/tail[I].numtg;
				for(J=0;J<tail[I].numtg;J++)
				{
					for(K=0;K<n;K++)
					{
						com=strcmp(tail[I].given[J],tail[K].name);
						if(com==0)
						{
							tail[K].recive =tail[K].recive + (tail[I].parcent);
						}
					}

				}				
			}
		}
		for(I=0;I<n;I++)
		{
			tail[I].total=tail[I].recive-tail[I].give;
		}
		

		for(I=0;I<n;I++)
		{
			printf("%s %d\n",a[I],tail[I].total);
		}
		printf("\n\n");
	}

	return 0;
}