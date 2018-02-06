// http://acm.timus.ru/problem.aspx?space=1&num=1025
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	long int n, a[105],i,nn,tmp,cnt;

	scanf("%ld", &n);

	for(i=0;i<n;i++)
		scanf("%ld",&a[i]);

	sort(a,a+n);

	nn = (n/2)+1;
	tmp=0;
	cnt=0;
	for(i=0;i<nn;i++)
	{
		tmp = (a[i]/2)+1;
		cnt+=tmp;
	}

	printf("%ld\n",cnt);

	return 0;

}