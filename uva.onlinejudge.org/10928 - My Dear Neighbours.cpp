// 10928 My Dear Neighbours

#include<stdio.h>
#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
//#include<sstream>
using namespace std;

typedef struct
{
	int num, cnt;
}data;

bool cmp(data lhs,data rhs)
{
	if(lhs.cnt<rhs.cnt) return true;
	else if(lhs.cnt==rhs.cnt && lhs.num<rhs.num) return true;

	return false;
}


int main()
{
	int t,p, i, k;
	vector<data> dataSet;
	data tmp;
	char d[2], line[10000];
	
	scanf("%d",&t);

	while(t--)
	{
		dataSet.clear();
		scanf("%d",&p);
		gets(d);

		for(i=1;i<=p;i++)
		{
			gets(line);

			int len=strlen(line), p;
			for(p=0,k=0;p<len;p++)
				if(line[p]==' ')
					k++;
			tmp.num = i;
			tmp.cnt = k+1;
			dataSet.push_back(tmp);
		}
		sort(dataSet.begin(), dataSet.end(),cmp);
		
		printf("%d",dataSet[0].num);
		k = dataSet[0].cnt;

		int len = dataSet.size();
		
		for(i=1;i<len;i++)
		{
			if(dataSet[i].cnt == k)
				printf(" %d",dataSet[i].num);

		}

		printf("\n");
	}

	return 0;
}