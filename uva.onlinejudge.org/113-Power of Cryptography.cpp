#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double n,p,k;

	while(scanf("%lf%lf",&n,&p)!=EOF)
	{
		k= exp(log(p)/n);
		printf("%.0lf\n",k);
	}

	return 0;
}