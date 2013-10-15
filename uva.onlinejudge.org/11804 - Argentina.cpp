#pragma warning(disable:4786)
#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;

struct P
{
	char name[25];
	int att;
	int dff;
}player[12];

bool operator<(struct P a, struct P b)
{
	if(a.att>b.att)return true;
	else if(a.att==b.att && a.dff<b.dff)return true;
	else if(a.att==b.att && a.dff==b.dff && strcmp(a.name,b.name)<0)return true;
	else return false;
}

int main()
{
	int t,cas=0;

	while(cin>>t)
	{
		cas=0;
		while(t--)
		{
			cas++;
			int i;
			map<string, int> ma,md;
			map<string,int>::iterator it;

			for(i=0;i<10;i++)
			{
				cin>>player[i].name;
				cin>>player[i].att;
				cin>>player[i].dff;
			}
			sort(player,player+10);
			for(i=0;i<5;i++)
			{
				ma[player[i].name]=i;
			}
			for(i=5;i<10;i++)
			{
				md[player[i].name]=i;
			}
			cout<<"Case "<<cas<<":"<<endl;
			cout<<"(";
			for (it=ma.begin();it!=ma.end();it++)
			{
				if(it!=ma.begin())
					cout<<", ";
				cout<<it->first;
			}
			cout<<")"<<endl;
			cout<<"(";
			for (it=md.begin();it!=md.end();it++)
			{
				if(it!=md.begin())
					cout<<", ";
				cout<<it->first;
			}
			cout<<")"<<endl;


		}
	}
	return 0;
}