#include<iostream>
using namespace std;

int main()
{
	int n,i,a;
	char col[1000];

	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>a;
			a=a*567;
			a=a/9;
			a=a+7492;
			a=a*235;
			a=a/47;
			a=a-498;
			sprintf(col,"%d",a);
			cout<<col[strlen(col)-2]<<"\n";
		}
	}	

	return 0;
}