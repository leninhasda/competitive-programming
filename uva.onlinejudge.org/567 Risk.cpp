// http://uva.onlinejudge.org/external/5/567.html
// 567 Risk

#include<iostream>
#include<stdio.h>
#include<queue>
#include<list>
using namespace std;

#define INF (1<<20)

struct type
{
	list<int> n;
};

void bfs()
{
	// initialize all as infinite
}

int main()
{
	int in;

	while(scanf("%d", &in)==1)
	{
		int idx = 0, next;
		type data[20];

		for(i=0; i<in; i++)
		{
			scanf("%d", &next);
			data[idx].n.push_back(next);
		}
		idx++;
	
		int t = 18;
		while(t--)
		{
			scanf("%d", &in);

			for(i=0; i<in; i++)
			{
				scanf("%d", &next);
				data[idx].n.push_back(next);
			}		
			idx++;
		}
	}

	return 0;
}