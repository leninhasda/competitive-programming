#include<iostream>
using namespace std;

char a[35],b[35];
struct abc 
{
	int ltr[123];
}all[55];

int clear(struct abc d[])
{
	for(int i=0;i<51;i++)
	{
		for(int j=96;j<123;j++)
		{
			d[i].ltr[j]=0;
		}
	}
	return 0;
}

int main()
{
	int n,i,k,j,m;
	char ch;

	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			cin>>a>>b>>m;
			clear(all);
			for(j=0;j<strlen(a);j++)
				all[0].ltr[a[j]]++;
			for(j=0;j<strlen(b);j++)
				all[1].ltr[b[j]]++;
			for(j=2;j<=m;j++)
			{
				for(k=97;k<123;k++)
				{
					all[j].ltr[k]=all[j-1].ltr[k]+all[j-2].ltr[k];
				}
			}
			for(ch='a';ch<='z';ch++)
				cout<<ch<<":"<<all[m].ltr[ch]<<endl;
			cout<<endl;
		}
	}

	return 0;
}