// 11503 Virtual Friends

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

#define MAX 100010

int parent[MAX], rank[MAX];

void init()
{
	int i;
	for(i=0; i<MAX; i++)
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

int union_node(int a, int b)
{
	if(rank[a] > rank[b])
	{
		parent[b] = a;
		rank[a]+=rank[b];
		return rank[a];
	}
	else
	{
		parent[a] = b;
		rank[b]+=rank[a];
		return rank[b];
	}
}


int main()
{

	int t, f, sNo, pa, pb, ans;
	char nam1[25], nam2[25];
	map<string, int> mNam;

	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d",&f);
		mNam.clear();
		init();
		sNo = 0;
		while(f--)
		{
			scanf("%s %s",&nam1, &nam2);
			if(mNam.find(nam1) == mNam.end())
			{
				mNam[nam1] = sNo;
				sNo++;
			}
			if(mNam.find(nam2) == mNam.end())
			{
				mNam[nam2] = sNo;
				sNo++;
			}

			pa = find_parent(mNam[nam1]);
			pb = find_parent(mNam[nam2]);

			if(pa != pb)
			{
				ans = union_node(pa, pb);
				printf("%d\n",ans);
			//	cout<<"->"<<endl;
			}
			else
			{
				// show ans
				printf("%d\n",rank[pa]);
			//	cout<<"<-"<<endl;
			}

		//	printf("%d\n",(sNo));

		}

/*		map<string, int>::iterator it;
		for(it=mNam.begin(); it != mNam.end(); it++)
			printf("%s %d\n",(it->first).c_str(), (it->second));*/

	}

	return 0;
}

/*
test case 1:
------------
1
13
A F
G H 
R T 
H R
H H
W P
Z A
T T
E T
T H
L L 
P Q 
G E
ans 1:
------
2
2
2
4
4
2
3
4
5
5
1
3
5

test case 2:
------------
1

5
A B
B C
D E
A D
A C
ans 2:
------
2
3
2
5
5
*/

