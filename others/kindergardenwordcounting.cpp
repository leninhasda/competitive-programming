#include<stdio.h>
#include<string.h>

int is_alpha(char che)
{
	char ab='A';
	for(ab;ab<'Z';ab++)
	{
		if(che==ab || che == (ab+32))
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char ch[10000];
	
	int I;
	
	while(gets(ch))
	{
		int word=0,flag=0,len=0;
	
		len=strlen(ch);
		
		for(I=0;I<len;I++)
		{
			if(is_alpha(ch[I]))
			{
				flag += 1;
			}
			else if(ch[I]==' ')
			{
				if(flag>0)
				{
					word += 1;
					flag=0;
				}
			}
			else
			{
				if(flag>0)
				{
					word += 1;
					flag=0;
				}
			}
		}

		printf("%d\n",word);
	}
	return 0;
}

