// 10583 Ubiquitous Religions

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

#define F(s,e) for(s=0;s<e;s++)
#define S(in) scanf("%d",&in)
#define sp printf("\n");
#define MAX 50005



int *parent, *rank;

void init(int n)
{
	parent = new int[n+1];
	rank = new int[n+1];

	int i;

	F(i,(n+1))
	{
		parent[i] = i;
		rank[i] = 1;
	}
}

int find_parent(int p)
{
	if(parent[p] != p)
		return parent[p] = find_parent(parent[p]);

	return parent[p];
}

void union_node(int a, int b)
{
	if(rank[a] > rank[b])
	{
		parent[b] = a;
		rank[a]++;
	}
	else
	{
		parent[a] = b;
		rank[b]++;
	}
}

int main()
{
	int n, m,i,a,b,cs=1, pa, pb;
	while(scanf("%d %d",&n,&m)==2)
	{
		if(!n && !m) break;

		init(n);

		F(i,m) // for loop
		{
			S(a); // scanf
			S(b);

			pa = find_parent(a);
			pb = find_parent(b);

			if(pa != pb)
			{
				n--;
				union_node(pa,pb);
			}
		}

		printf("Case %d: %d", cs, n);
		sp; // new line
		cs++;
		delete[] parent;
		delete[] rank;
	}

	return 0;
}