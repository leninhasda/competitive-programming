#include<iostream>
#include<cstring>
using namespace std;

bool isVowel(char ch)
{
	switch(ch)
	{
	case 'a':
		return true;
		break;
	case 'e':
		return true;
		break;
	case 'i':
		return true;
		break;
	case 'o':
		return true;
		break;
	case 'u':
		return true;
		break;
	}

	return false;
}

bool checkVowel(char rl[], char fk[])
{
	int i;

	int len = strlen(rl);

	for(i=0;i<len;i++)
	{
		if((rl[i] != fk[i]) && (!isVowel(rl[i]) || !isVowel(fk[i])))
			return false;
	}

	return true;
}

int main()
{
	char real[25],fake[25];
	int n;

	scanf("%d",&n);

	while(n--)
	{
		scanf("%s%s",&real,&fake);

		if(strcmp(real,fake)==0)
		{
			printf("Yes\n");
		}
		else if(strlen(real) != strlen(fake))
		{
			printf("No\n");
		}
		else
		{
			if(checkVowel(real, fake))
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}

	return 0;
}