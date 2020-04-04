#include<iostream>
using namespace std;

int f[10];

void factorial()
{
	f[0]=1;
	int fac=1,i;
	for(i=1;i<=9;i++)
	{
		fac *=i;
		f[i]=fac;
	}
}

int main()
{
	factorial();

	cout<<"n e"<<endl;
	cout<<"- -----------"<<endl;

	double e=0;

	for(int i=0;i<10;i++)
	{
		cout<<i<<" ";
		e += (1.0/double(f[i]));
		if(i<=2)
			cout<<e<<endl;
		else
			printf("%.9lf\n",e);
	}

	return 0;
}