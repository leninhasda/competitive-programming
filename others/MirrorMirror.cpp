#include<stdio.h>

int main()
{
	int N,I,J,flag,rot,count=0;
	char a1[10][10],a2[10][10];

	while(scanf("%d",&N)!=EOF)
	{
		count++;
		for(I=0;I<N;I++)
		{
			scanf("%s",&a1[I]);
			scanf("%s",&a2[I]);
		}

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[I][J])
				{
					flag=1;
					rot=0;
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
				rot=101;
				break;
			}
		}
		
		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[J][N-(I+1)])
				{
					flag=1;
					rot=90;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[N-(I+1)][N-(J+1)])
				{
					flag=1;
					rot=180;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[N-(J+1)][I])
				{
					flag=1;
					rot=270;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[N-(I+1)][J])
				{
					flag=1;
					rot=100;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[J][I])
				{
					flag=1;
					rot=91;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[I][N-(J+1)])
				{
					flag=1;
					rot=181;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		for(I=0;I<N;I++)
		{
			for(J=0;J<N;J++)
			{
				if(a1[I][J]==a2[N-(J+1)][N-(I+1)])
				{
					flag=1;
					rot=271;
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
				rot=101;
				break;
			}
		}

		if(rot!=101)
			goto switcch;

		rot=101;

switcch:switch(rot)
		{
		case 0:
			printf("Pattern %d was preserved.\n",count);
			break;
		case 101:
			printf("Pattern %d was improperly transformed.\n",count);
			break;
		case 100:
			printf("Pattern %d was reflected vertically.\n",count);
			break;
		case 90:
			printf("Pattern %d was rotated 90 degrees.\n",count);
			break;
		case 180:
			printf("Pattern %d was rotated 180 degrees.\n",count);
			break;
		case 270:
			printf("Pattern %d was rotated 270 degrees.\n",count);
			break;
		case 91:
			printf("Pattern %d was reflected vertically and rotated 90 degrees.\n",count);
			break;
		case 181:
			printf("Pattern %d was reflected vertically and rotated 180 degrees.\n",count);
			break;
		case 271:
			printf("Pattern %d was reflected vertically and rotated 270 degrees.\n",count);
			break;
		}		
	}
	return 0;
}