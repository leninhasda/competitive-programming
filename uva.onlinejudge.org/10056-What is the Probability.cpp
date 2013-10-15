#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n,i,t;
	double ans,p;
	while(cin>>t)
	{
		while(t--)
		{
			cin>>n>>p>>i;
			if(p==0.0) 
				printf("0.0000\n"); 
			else
			{
				ans = pow(1.0-p,i-1.0)/((1/p)*(1.0-pow(1.0-p,n)));
				printf("%.4lf\n",ans);
			}
		}
	}
	return 0;
}