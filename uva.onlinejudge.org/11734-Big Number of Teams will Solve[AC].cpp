#include<iostream>
#include<string.h>
using namespace std;

char* isFormated(char tm[], char jg[])
{
	int ary[25],i,flag=0;
	
	memset(ary,0,sizeof(ary));

	for(i=0;i<strlen(tm);i++)
	{
		if(tm[i]==' ')
			flag = 1;
		ary[tolower(tm[i])-'a'] ++;
	}

	for(i=0;i<strlen(jg);i++)
		ary[tolower(jg[i]) - 'a'] ++;

	for(i=0;i<20;i++)
	{
		if(ary[i] == 1)
			return "error-w";
	}
	
	if(flag==1)
	{
		return "error-f";
	}
	
	return "error-w";
}

int main()
{
	char team[25], judge[25],*get;
	int n,i;

	while(scanf("%d\n",&n)!=EOF)
	{
		for(i=1;i<=n;i++)
		{
			gets(team);
			gets(judge);

			if(strcmp(team,judge)==0)
			{
				printf("Case %d: Yes\n",i);
			}
			else
			{
				get = isFormated(team,judge);

				if(strcmp(get,"error-w")==0)
					printf("Case %d: Wrong Answer\n",i);
				else if(strcmp(get,"error-f")==0)
					printf("Case %d: Output Format Error\n",i);
			}
		}
	}
	return 0;
}