#include<iostream>
#include<stdio.h>
using namespace std;

#define MIN(a, b) (a<b)?a:b;

int c[1005];
int n;
bool cut[1005];
int l;

int solve(int a, int b) {
	int i , ret = (1<<20);

	if((b-a) < 2) return 0;

	for(i=a+1; i<b; i++) {
		if(cut[i]) {
			ret = MIN(ret, c[b] - c[a] + solve(a, i) + solve(i, b))
		}
	}

	return ret;

}

int main()
{
	int i, ans;
	while(scanf("%d", &l)==1)
	{
		if(!l) break;

		scanf("%d", &n);
		memset(cut, 0, sizeof(cut));

		for(i=0;i<n;i++) {
			scanf("%d", ans);
			cut[ans] = true;
		}

		ans = solve(0, l);
		printf("The minimum cutting is %d.\n", ans);
	}
	return 0;
}