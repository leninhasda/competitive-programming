#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[4];
	while(cin>>a[0]>>a[1]>>a[2] && a[0] && a[1] && a[2])
	{
		sort(a,a+3);
		if(((a[0]*a[0])+(a[1]*a[1]))==(a[2]*a[2]))
			cout<<"right"<<endl;
		else
			cout<<"wrong"<<endl;
	}
	return 0;
}