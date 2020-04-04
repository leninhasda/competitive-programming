#include<iostream>
using namespace std;

struct vec
{
	char b[100000];
}a[10];

struct vect
{
	struct vec ba[100000];
}ab[10];

int main()
{
	char ch;
	int m,i;

	while(1)
	{
		m=0;
		while(cin>>ch)
		{
			if(ch==' ')
			break;
			a[0].b[m]=ch;
			m++;
		}
		for(i=0;i<=m;i++)
			cout<<a[0].b[i];
		cout<<endl;
	}
	return 0;
}