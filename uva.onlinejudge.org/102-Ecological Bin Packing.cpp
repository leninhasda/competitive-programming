#include<iostream>
#include<algorithm>
using namespace std;

int a[10];

struct A
{
	char clr[3];
	int time;
}list[7];

void BGC()
{
	strcpy(list[0].clr,"BGC");
	strcpy(list[1].clr,"BCG");
	strcpy(list[2].clr,"GBC");
	strcpy(list[3].clr,"GCB");
	strcpy(list[4].clr,"CBG");
	strcpy(list[5].clr,"CGB");
}

int move(char x[])
{
	int cnt=0;
	if(strcmp(x,"BGC")==0)
	{
		cnt=a[1]+a[2]+a[3]+a[5]+a[6]+a[7];
		return cnt;
	}
	else if(strcmp(x,"BCG")==0)
	{
		cnt=a[1]+a[2]+a[3]+a[4]+a[6]+a[8];
		return cnt;
	}
	else if(strcmp(x,"GBC")==0)
	{
		cnt=a[0]+a[2]+a[4]+a[5]+a[6]+a[7];
		return cnt;
	}
	else if(strcmp(x,"GCB")==0)
	{
		cnt=a[0]+a[2]+a[3]+a[4]+a[7]+a[8];
		return cnt;
	}
	else if(strcmp(x,"CBG")==0)
	{
		cnt=a[0]+a[1]+a[4]+a[5]+a[6]+a[8];
		return cnt;
	}
	else if(strcmp(x,"CGB")==0)
	{
		cnt=a[0]+a[1]+a[3]+a[5]+a[7]+a[8];
		return cnt;
	}
	return 0;
}

bool operator<(struct A a,struct A b)
{
	if(a.time<b.time)
		return true;
	else if(a.time==b.time && strcmp(a.clr,b.clr)<0)
		return true;
	else
		return false;
}

int main()
{
	BGC();
	int i;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8])
	{
		for(i=0;i<6;i++)
		{
			list[i].time=move(list[i].clr);
		}
		sort(list,list+6);
		cout<<list[0].clr<<" "<<list[0].time<<"\n";
	}	

	return 0;
}