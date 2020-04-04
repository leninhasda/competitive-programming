#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main()
{
	char word[10005];
	int n,len,rot,i,ti;
	
	scanf("%d\n",&n);
	
	while(n--)
	{
		gets(word);
		
		len = strlen(word);
		
		rot = sqrt(len);

		if((rot*rot) != len)
			printf("INVALID\n");
		else
		{
			for(i=0;i<rot;i++)
			{
				ti=i;
				while(ti<len)
				{
					printf("%c",word[ti]);
					ti+=rot;
				}
			}

			printf("\n");
		}

	}
	
	
	return 0;
}

