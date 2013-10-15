// 573 - The Snail

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

int main()
{
	int h, u, d, f, day;
	int up, hh, uu, dd, ff;
	while(scanf("%d %d %d %d", &h, &u, &d, &f) && h)
	{			
		hh = h*100; uu = u*100; dd = d*100; ff = f * u;
		up = day = 0;
		while(up<=hh && up >= 0)
		{
			up += uu;
			uu -= ff;
			if(uu < 0) uu = 0;
			if(up <= hh) up -= dd;
			day++;
		}
		
		if(up > hh)
			printf("success on day %d\n",day);			
		else
			printf("failure on day %d\n",day);
	}
	return 0;
}