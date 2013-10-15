#include <stdio.h>

int main()
{
	int ary[50],N,S,temp,a;
	int i=0,k,l;
	scanf("%d",&N);
	while(i<N)
	{
		int count=0,j=0;
		scanf("%d",&a);
		while(j<a)
		{
			scanf("%d",&ary[j]);
			j++;
		}

		S=a-1;
		for(k=0; k<S; k++)
		{
			for(l=0; l<(S-k); l++)
			{
				if(ary[l]>ary[l+1])
				{
					temp=ary[l];
					ary[l]=ary[l+1];
					ary[l+1]=temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
		i++;
	}
	return 0;
}

/*int ary[50],N,S,temp,a;
	int i=0,j=0,k=0,l=0;
	scanf("%d",&N);
	whilefor(int i=0;i<N;i++)
	{
		int count=0,j=0;
		scanf("%d",&a);
		while(int j=0;j<a;j++)
		{
			scanf("%d",&ary[j]);
			j++;
		}

		S=a-1;
		for(int k=0; k<S; k++)
		{
			for(int l=0; l<(S-k); l++)
			{
				if(ary[l]>ary[l+1])
				{
					temp=ary[l];
					ary[l]=ary[l+1];
					ary[l+1]=temp;
					count++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
		i++;
	}
	return 0;*/