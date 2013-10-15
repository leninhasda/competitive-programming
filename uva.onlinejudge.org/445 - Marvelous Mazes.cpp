#include<iostream>
using namespace std;

int main()
{
	char line[140];

	while(gets(line))
	{
		int i,j,cnt=0, len = strlen(line);
		for(i=0;i<len;i++)
		{
			if(isdigit(line[i]))
				cnt += line[i] - '0';
			else
			{
				if(line[i] == 'b')
				{
					for(j=0;j<cnt;j++)
						printf(" ");
					cnt = 0;
				}
				else if(line[i] == '!')
				{
					printf("\n");
					cnt = 0;
				}
				else
				{
					for(j=0;j<cnt;j++)
						printf("%c",line[i]);
					cnt=0;
				}
			}
		}
		printf("\n");
	}

	return 0;
}