#pragma warning (disable:4786)
#include<stdio.h>
#include<string.h>
#include<map>
#include<iostream>
using namespace std;
int main()
{
	char c[20000],p[1000],s[1000];
	gets(p);gets(s);
	puts(s);puts(p);
	map<char,char>m;
	int i,l1=strlen(s);
	for(i=0;i<l1;i++){
		m[p[i]]=s[i];
	}
	while(gets(c)){
		int l=strlen(c);
		for(int i=0;i<l;i++){
			if(m[c[i]]!=0)
			cout<<m[c[i]]; 
			else 
				printf("%c",c[i]);
		}
		printf("\n");
	}
	return 0;
}