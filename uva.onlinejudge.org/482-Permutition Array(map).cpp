#pragma warning (disable:4786)
#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	map<int,string> M;
	map<int,string>::iterator IT;
	int i,j,t,m,a[10000];
	char c,ab[100];

	while(cin>>t)
	{
		for(j=0;j<t;j++)
		{
			m=0;
			while(1)
			{
				scanf("%d%c",&a[m],&c);
				if(c=='\n')
					break;
				m++;
			}
			for(i=0;i<=m;i++)
			{
				cin>>ab;
				M[a[i]]=ab;
			}
			for ( IT=M.begin() ; IT != M.end(); IT++ )
				cout << (*IT).second << endl;

			if(j!=(t-1))
				cout<<endl;
			M.clear();
		}
	}
	return 0;
}