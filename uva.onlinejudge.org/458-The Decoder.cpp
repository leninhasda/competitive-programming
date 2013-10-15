#include<stdio.h>
#define MAX 100000
int main()
{
	char ch[MAX];
	int I;
	while(gets(ch))
	{
		for(I=0; I<MAX;I++)
		{
			if(ch[I]=='\0')
			{
				break;
			}
			else
			{
				printf("%c",(ch[I]-7));
			}
		}
		printf("\n");
	}
	return 0;
}