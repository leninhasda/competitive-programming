// 12578 - 1062

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double pi = acos(-1), garea, rarea;
	int t, l;
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &l);
		garea = (6.0*l*l)/10;
		rarea = pi*(l*1.0/5)*(l*1.0/5);
		printf("%.2lf %.2lf\n", rarea, (garea-rarea));
	}

	//cout<<acos(-1)<<endl;
	return 0;
}