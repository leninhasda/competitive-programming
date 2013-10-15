// 10812 - Beat the Spread!
#include<cstdio>
#include<iostream>
using namespace std;

#define abs(x) (x<0)? (x*-1) :  x

int main()
{
	int x, y, s, a, t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &s, &a);
		if(s < a) {
			printf("impossible\n");
		}else {
			x = (s+a)/2;
			y = abs(s-x);
			if(abs(x-y) == a) {
				(x > y) ? printf("%d %d\n", x, y) : printf("%d %d\n", y, x);
			} else {
				printf("impossible\n");
			}
		}
	}
	return 0;
}