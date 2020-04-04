#include<iostream>
#include<algorithm>
using namespace std;

struct LIST
{
	int cost;
	int weight;
}list[505];

bool L(struct LIST a, struct LIST b)
{
	if(a.weight == b.weight && a.cost < b.cost)
		return true;
	else if(a.weight>b.weight)
		return true;
	else
		return false;
}

void eddy()
{
	int before=0,after=0,main=0,numOfCoin=0,i=0, div=0, mod=0;
	int ans[100],m=0;
	cin>>before>>after;
	main=after-before;

	cin>>numOfCoin;

	for(i=0;i<numOfCoin;i++)
	{
		cin>>list[i].cost>>list[i].weight;
		if((main%list[i].weight)==0)
		{
			div=main/list[i].weight;
			ans[m] = div*list[i].cost;
			m++;
		}
	}
	sort(list,list+numOfCoin,L);

	div = 0; mod = 0; int min = 0;
	for(i=0;i<numOfCoin;i++)
	{
		if(main<list[i].weight)
			continue;
		div = main/list[i].weight;
		mod = main%list[i].weight;
		if(div<1 || div==0)
			continue;
		min += (div*list[i].cost);
		main = mod;
		if(main==0)
			break;
	}
	if(main!=0)
		cout<<"This is impossible."<<endl;
	else
	{
		ans[m] = min;
		sort(ans,ans+m+1);
		cout<<"The minimum amount of money in the piggy-bank is "<<ans[0]<<"."<<endl;
	}
		
}

int main()
{
	int tCase,i;
	cin>>tCase;
	for(i=0;i<tCase;i++)
		eddy();
	return 0;
}