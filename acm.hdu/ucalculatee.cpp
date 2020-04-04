#include<iostream>
using namespace std;

int fact(int n)
{
	int ans=1;
	if(n==0)
		return ans;
	else
	{
		while(n>=1)
		{
			ans *= n;
			n--;
		}
		return ans;
	}
}

int main()
{
	int i,f;
	double ans=0;

	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;
	for(i=0;i<10;i++)
	{
		f=fact(i);
		ans += 1/(double)f;
		if(i==0 || i==1)
			printf("%d %.0lf\n",i,ans);
		else if(i==2)
			printf("%d %.1lf\n",i,ans);
		else
			printf("%d %.9lf\n",i,ans);
	}
	return 0;
}