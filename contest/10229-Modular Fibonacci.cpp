#pragma warning(disable:4786)
#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<__int64,__int64> m;
	m[0]=0;
	m[1]=1;
	__int64 I;
	for(I=2;I<=2147483647;I++)
	{
		m[I]=m[I-1]+m[I-2];
	}
	cout<<"done"<<endl;
	return 0;
}