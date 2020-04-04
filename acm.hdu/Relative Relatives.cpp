#include<iostream>
using namespace std;

struct
{
	char fname[500];
	char cname[500];
	int tage;
	int fage;
	int cage;
}set[100];

struct
{
	char childn[500];
	int num;
}child[1000];

int main()
{
	int n,i,x,j;
	int cnt;

	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>x;
			for(j=0;j<x;j++)
			{
				cin>>set[j].fname>>set[j].cname>>set[j].tage;
			}

			for(j=0;j<x;j++)
			{
				if(!strcmp(set[j].fname,"Ted"))
				{
					set[j].fage=100;
					set[j].cage=set[j].fage-set[j].tage;
					strcpy(child[0].childn,set[j].cname);
					child[0].num=0;
					break;
				}
			}
			
			for(j=0;j<x;j++)
			{
				if(!strcmp(child[0].childn,set[j].fname))
				{
					child[0].num++;	
				}
			}
			for(j=0;j<child[0].num)

		}
	}

	return 0;
}