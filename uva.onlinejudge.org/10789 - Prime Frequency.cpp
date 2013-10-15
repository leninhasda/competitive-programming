#pragma warning(disable:4786)
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<map>
#include<list>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<string>
using namespace std;

#define mx 2005

int pr[mx];
/*
typedef struct
{
	char ch;
	int cnt;
}DATA;*/

// seive to generate prime upto 2001
void seive()
{
	memset(pr, 1, sizeof(pr));

	pr[0] = pr[1] = 0;

	int i, j;

	for(i = 4; i<mx; i+=2)
		pr[i]=0;

	for(i = 3; i<mx; i++)
	{
		if(pr[i] != 0)
		{
			for(j = i * i; j<=mx; j+=(2*i))
			{
				pr[j] = 0;
			}
		}
	}
}

int main()
{
	seive();
/*	vector<DATA> data;
	DATA tmpData;*/

	int t, i, cas, strLen;//, vecLen;
	int data[150];
	char str[mx];
	scanf("%d",&t);

	for(cas=1; cas<=t; cas++)
	{
		scanf("%s",&str);
	//	data.clear();
		memset(data, 0, sizeof(data));
		
		strLen = strlen(str);

		for(i = 0; i<strLen; i++)
		{
			data[str[i]]++;
		}

	//	vecLen = data.size();

		printf("Case %d: ", cas);
		int flag = 0;
		for(i = 45; i<150; i++)
		{
			if(data[i] != 0 && pr[data[i]])
			{
				flag = 1;
				printf("%c",i);
			}
		}
		if(!flag)
			printf("empty");
		printf("\n");
	}

	return 0;
}