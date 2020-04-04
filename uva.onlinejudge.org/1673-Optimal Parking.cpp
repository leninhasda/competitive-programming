#include<iostream>
using namespace std;

int main()
{
	int tCase,numShop,shop[25],i,j,tmp;

	while(cin>>tCase)
	{
		for(i=0;i<tCase;i++)
		{
			cin>>numShop;
			for(j=0;j<numShop;j++)
				cin>>shop[j];
			tmp=0;
			for(j=0;j<numShop-1;j++)
			{
				tmp += (shop[j+1]-shop[j])*2;
			}
			cout<<tmp<<endl;
		}
	}
	return 0;
}