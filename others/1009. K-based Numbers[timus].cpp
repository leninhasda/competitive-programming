#include<iostream>
using namespace std;

// 0 = red
// 1 = blue
// 2 = white

__int64 n, k, ans, ans2, a[50][20];

__int64 dp(__int64 cur, __int64 num)
{
	__int64 one, two;
	if(cur == (n+1)) return 1;
	if(cur > (n+1)) return 0;	

	if(a[cur][num] >= 0)
		return a[cur][num];

	if(num == 0)
	{
		
		one =((k-1)*dp(cur+1, 1));

		a[cur][num] = one;

		return (one);
	}
	else
	{
		one = dp(cur+1, 0);
		two = ((k-1)*dp(cur+1, 1));

		a[cur][num] = (one+two);

		return (one+two);
	}

	return 0;

}

void init()
{
	int i,k;
	for(i=0;i<50;i++)
		for(k=0;k<20;k++)
			a[i][k] = -1;
}

int main()
{

	while(scanf("%I64d %I64d",&n, &k)==2)
	{
		init();
	//	ans = dp(2,0);
		ans2 = dp(2,1);

		printf("%I64d\n",(ans2*(k-1)));
	}

	return 0;
}