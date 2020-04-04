#include<stdio.h>

static int K=0;
int Vir=5;
static int sP[20];
int a[6][6]={
				{0,0,0,0,0,0},
				{0,0,2,0,6,0},
				{0,2,0,3,0,0},
				{0,0,3,0,5,4},
				{0,6,0,5,0,1},
				{0,0,0,4,1,0}
};

int sortPath(int F, /*From*/
			 int T, /*To*/
			 int j=0,
			 int V=0, /*Value*/
			 int A=0 /*Add*/
			 )
{
	int J=0;
	for(J=1; J<=Vir; J++)
	{
		if(a[j][J]!=0)
		{
			if(a[j][J]!=V && (j!=F && J != T))
			{
				if(J!=F && J!=T)
				{
					A=A+a[j][J];
					sortPath(F,T,j,a[j][J],A);
				}
				else if(J==T)
				{
					A=A+a[j][J];
					sP[K++]=A;
				}
			}
		}
	}

	return 0 ;
}

void main()
{
	int i,s=1;
	sortPath(1,5);

	for(i=0;i<20;i++)
	{
		printf("%5d",sP[i]);
		if(sP[i]<s && sP[i]>0)
		{
			s+=sP[i];
		}
	}

	printf("\nShortest path is: %d \n\n",s);

}