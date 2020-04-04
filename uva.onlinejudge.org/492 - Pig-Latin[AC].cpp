#include<iostream>
#include<string>
using namespace std;

bool isVowel(char ch)
{
	if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
		ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
		return true;
	
	return false;
}

bool isLetter(char ch)
{
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return true;
	
	return false;
}
/*
int main()
{
	string str;
	char ch;
	
	while(scanf("%c"&ch)==1)
	{
		str.erase(str.begin(), str.end());

		if(isLetter(ch))
		{
			str += ch;
		}
		else
		{
			printf("%c",ch);
		}

		while(scanf("%c",&ch)==1)
		{
			if(ch == 10)
				break;

			if(isLetter(ch))
			{
				str += ch;
			}
			else
			{

			}
		}
	}

	return 0;
}


/*/
int main()
{
	char ch,cc;
	bool s,e,v,c;
	
	while(scanf("%c",&ch)==1)
	{
		s = e = v = c = false;
		if(isLetter(ch))
		{
			s = true;
			
			if(isVowel(ch))
			{
				printf("%c",ch);
				v = true;
			}
			else
			{
				cc = ch;
				c = true;
			}
		}
		else
		{
			s = e = v = c = false;
			printf("%c",ch);
		}
		
		while(scanf("%c",&ch)==1)
		{
			if(ch == 10)
				break;
			
			if(isLetter(ch))
			{
				if(s)
				{
					printf("%c",ch);
				}
				else
				{
					s = true;
					
					if(isVowel(ch))
					{
						printf("%c",ch);
						v = true;
					}
					else
					{
						cc = ch;
						c = true;
					}
				}
			}
			else
			{
				if(v)
				{
					printf("ay%c",ch);
				}
				else if(c)
				{
					printf("%cay%c",cc,ch);
				}
				else
				{
					printf("%c",ch);
				}
				s = e = v = c = false;
			}
		}
		if(v)
		{
			printf("ay%c",ch);
		}
		else if(c)
		{
			printf("%cay%c",cc,ch);
		}
		printf("\n");
	}
	
	return 0;
}
