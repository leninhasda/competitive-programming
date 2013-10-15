#include<stdio.h>
#define MAX 100000
int main()
{
	char ch[MAX];
	static int I,count=0;
	while(gets(ch))
	{
		for(I=0;I<MAX; I++)
		{
			if(ch[I] == '\0')
			{
				break;
			}
			else
			{
				if(ch[I]=='"' && (count%2)==0)
				{
					printf("``");
					count++;
				}
				else if(ch[I]=='"' && (count%2)==1)
				{
					printf("''");
					count++;
				}
				else
				{
					printf("%c",ch[I]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}