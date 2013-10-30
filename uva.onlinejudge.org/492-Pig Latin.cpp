// 492 - Pig Latin

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
using namespace std;

#define putC(x) printf("%c", x)
#define putn() printf("\n")

bool isVowel(char ch)
{
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' ||ch=='U' ||
	   ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		return true;
	}
	else
		return false;
}

bool isPunch(char c)
{
	char ch;
	for(ch='A';ch<='Z';ch++)
	{
		if(c==ch || c==(ch+32))
			return false;
	}
	return true;
}


int main()
{	
	char line[1000000],ch;
	int i,len;//,j;
	bool first, vowel;

	while(gets(line))
	{
		len = strlen(line);
		first = true; vowel = true;
		for(i=0; i<len; i++)
		{
			if(first)
			{
				if(isPunch(line[i]))
				{
					putC(line[i]);
					continue;
				}
				if(!isVowel(line[i]))
				{
					vowel = false;
					ch = line[i];
				}
				else putC(line[i]);
				first = false;
			}
			else
			{
				// check for '.' && ' '
				if(line[i] == '.' || line[i] == ' ' || isPunch(line[i]))			
				{
					if(!vowel)
					{
						putC(ch);
						vowel = true;
					}
					putC('a');putC('y');
					//putc(line[i]);
					first = true;
				}
				/*else if(isPunch(line[i]))
				{
					putC('a');putC('y');
					first = true;
				}*/
				putC(line[i]);
			}
		}
		if(!first)
		{
			if(!vowel)
				putC(ch);
			putC('a');putC('y');
		}
		putn();
	}		
	return 0;
}
