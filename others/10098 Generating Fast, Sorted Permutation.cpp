// http://online-judge.uva.es/p/v100/10098.html
// 10098 Generating Fast, Sorted Permutation

#include<iostream>
#include<cstdio>
#include<cstring>
#include<string.h>
#include<algorithm>
using namespace std;

char str[15];
char ans[15];
int n, len;
bool flag[60] ;


void gen(int pos)
{
	if((pos) == len)
	{
		ans[pos] = '\0';
		printf("%s\n", ans);
		return;
	}

	int i = 0;
	bool flag2[150] ;
	
	for(i=0; i<150; i++)
		flag2[i] = false;	

//	cout<<"pos: "<<pos<<endl;
	for(i=0;i<len;i++)
	{
		int e;
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			e = str[i]-'a';
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			e = str[i] - 'A';
		}
		else if(str[i] >= '0' && str[i] <= '1')
		{
			e = str[i] -'0';
		}
//		cout<<" i: "<<i<<" ";
		if(flag[i] || flag2[e]) 
		{
			continue;
		}
		else
		{	
	/*		int e;
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				e = str[i] - 'a';
			}
			else if(str[i] >= 'A' && str[i] <= 'Z')
			{
				e = str[i] - 'A'+26;
			}
			else if(str[i] >= '0' && str[i] <= '1')
			{
				e = str[i] -'0' + 52;
			}*/

			flag[i] = flag2[e] = true;
			ans[pos] = str[i];
			gen(pos+1);
			flag[i] = false;
		}
	}	
}

int main()
{
	scanf("%d", &n);

	while(n--)
	{
		scanf("%s", &str);

		len = strlen(str);

		for(int i=0; i<=len; i++)
			flag[i] = false;

		sort(str, str+len);

		gen(0);
		printf("\n");
	}

	return 0;
}