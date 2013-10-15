#include<iostream>
#include<algorithm>
using namespace std;

struct A
{
	int a;
	char b[100];
}ab[10000];

bool operator<(struct A a, struct A b)
{
	if(a.a<b.a)
		return true;
	else 
		return false;
}

int main()
{
	int i,j,t,m;
	char c;

	while(cin>>t)
	{
		for(j=0;j<t;j++)
		{
			m=0;
			while(1)
			{
				scanf("%d%c",&ab[m].a,&c);
				if(c=='\n')
					break;
				m++;
			}
			for(i=0;i<=m;i++)
				cin>>ab[i].b;
			sort(ab,ab+m+1);
			for(i=0;i<=m;i++)
			{
				cout<<ab[i].b<<endl;
			}
			if(j!=(t-1))
				cout<<endl;
		}
	}
	return 0;
}