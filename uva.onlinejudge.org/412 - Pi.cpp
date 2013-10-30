// 412 - Pi 
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

int findGCD(int a, int b)
{
	if(b==0) return a;
	return findGCD(b, a%b);
}

int main()
{
	int arr[52], i, j, n, t, p;
	double pi;
	while(scanf("%d", &n) && n)
	{
		for(i=0;i<n;i++)
			scanf("%d", &arr[i]);
		t=p=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				t++;
				if(findGCD(arr[i],arr[j]) == 1)
					p++;
			}
		}
		if(p == 0) {
			printf("No estimate for this data set.\n");
		} else {
			pi =sqrt( (t*1.0/p) * 6 );
			printf("%.6lf\n", pi);
		}
	}
	return 0;
}
