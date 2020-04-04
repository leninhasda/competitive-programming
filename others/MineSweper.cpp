#include<iostream>
using namespace std;

#define MAX 102

int main()
{
	char a[MAX][MAX];
	int v[MAX][MAX];
	int m,n,i,j,k,l,tn,tm;
	
	for(i=0;i<102;i++)
	{
		for(j=0;j<102;j++)
		{
			v[i][j]=0;
		}
	}

	while(cin>>n>>m)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]=='*')
				{
					k=((i-1)<0)?0:(i-1);
					l=((j-1)<0)?0:(j-1);
					tn=((i-1)<0)?(k+2):(k+3);
					tm=((j-1)<0)?(k+2):(l+3);
					for(k;k<tn;k++)
					{
						for(l;l<tm;l++)
						{
							if(k==i && l==j)
							{
								v[k][l]=-1;
							}
							else
							{
								v[k][l]++;
							}
						}
					}
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout<<v[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	return 0;
}
