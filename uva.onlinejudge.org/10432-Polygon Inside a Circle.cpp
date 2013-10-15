#include<stdio.h>
#include<math.h>

int main()
{
	double r,n,pi,area;
	
	while(scanf("%lf %lf",&r,&n)!=EOF)
	{
		pi=4*acos(0.0);
		area=(n*(r*r)*.5)*sin(pi/n);
		printf("%.3lf\n",area);
	}
	return 0;
}