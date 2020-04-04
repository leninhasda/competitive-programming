#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;

#define mx 1010

struct data
{
	int num;
	int div;
}div_num[mx];

bool cmp(data a, data b)
{
	if(a.div == b.div && a.num > b.num) return true;
	else if(a.div < b.div) return true;
	return false;	
}

void init ()
{
	int i, j, id;
	for(i=1; i<mx; i++)
	{
		div_num[i].num=i;
		div_num[i].div = 1;
	}
	for(i=2; i<=(mx-10); i++) 
	{
		j=1;
		while(j)
		{
			id = i*j;
			if(id > (mx-10)) break;
			div_num[id].div++;
		}
	}
	sort(div_num, div_num+mx-10, cmp);
}

int main ()
{
	init();

	int n, t, cs;

	scanf("%d", &t);

	for(cs=1; cs<=t; cs++)
	{
		printf("Case %d: %d\n", cs, div_num[n].num);
	}
	
	system("PAUSE");

	return 0;
}
