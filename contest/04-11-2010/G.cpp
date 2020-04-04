#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

typedef struct{
	char ch;
	int cnt;
}item;

int main()
{
	queue<item> q;
	item tmp;
	char a[100000];
	
	while(gets(a))
	{
		int cnt,i,len = strlen(a);
		tmp.ch = a[0];
		tmp.cnt = 1;

		for(i=1;i<len;i++)
		{
			if(a[i]==tmp.ch)
				tmp.cnt++;
			else
			{
//				cout<<tmp.ch<<" tmpch"<<endl;
				q.push(tmp);
				tmp.ch=a[i];
				tmp.cnt = 1;
			}
		}
//		cout<<tmp.ch<<" "<<tmp.cnt<<endl;
		q.push(tmp);
//		cout<<q.size()<<endl;
		while(!q.empty())
		{
			tmp = q.front();
			q.pop();
			if(tmp.cnt!=1)
			{
				if(tmp.cnt>9)
				{
					cnt = tmp.cnt;
					while(cnt>9)
					{
						printf("9%c",tmp.ch);
						cnt -=9;
					}
					printf("%d%c",cnt,tmp.ch);
				}
				else
				{
					printf("%d%c",tmp.cnt,tmp.ch);
				}
			}
			else
			{
				printf("1%c",tmp.ch);
				if(tmp.ch=='1')
					printf("1");
				while(!q.empty())
				{
					tmp= q.front();
					if(tmp.cnt==1)
					{
						if(tmp.ch=='1')
							printf("1");
						printf("%c",tmp.ch);
						q.pop();
					}
					else
					{
						break;
					}
				}
				printf("1");
			}
		}
		printf("\n");
	}
	

	return 0;
}