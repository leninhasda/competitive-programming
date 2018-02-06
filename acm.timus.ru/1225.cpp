// http://acm.timus.ru/problem.aspx?space=1&num=1225

#include<iostream>
using namespace std;

// 0 = red
// 1 = blue
// 2 = white

__int64 n, ans, a[50][5];

__int64 dp(__int64 cur, __int64 col)
{
	__int64 one, two;
	if(cur == (n+1)) return 1;
	if(cur > (n+1)) return 0;	

	if(a[cur][col] >= 0)
		return a[cur][col];

	if(col == 0)
	{
		
		one =dp(cur+1, 2);
		two = dp(cur+2, 2);

		a[cur][col] = (one+two);

		return (one+two);
	}
	else if(col = 2)
	{
		one = dp(cur+1, 0);
		two = dp(cur+2, 0);

		a[cur][col] = (one+two);

		return (one+two);
	}

	return 0;

}

void init()
{
	int i,k;
	for(i=0;i<50;i++)
		for(k=0;k<5;k++)
			a[i][k] = -1;
}

int main()
{

	while(scanf("%d",&n)==1)
	{
		init();
		ans = dp(2,0);

		printf("%I64d\n",(ans*2));
	}

	return 0;
}