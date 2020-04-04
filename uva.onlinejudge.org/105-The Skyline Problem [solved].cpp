#include<iostream>
using namespace std;

#define _s scanf
#define _p printf

int main()
{
	int cuh,i,l,h,r,a[20000]={0},lp=10000,rp=0;
	memset(a,0,sizeof(a));

	while(_s("%d%d%d",&l,&h,&r)==3)
	{
		for(i=l+1;i<=r;i++)
			if(a[i]<h)
				a[i]=h;

		if(l<lp) lp = l;
		if(r>rp) rp = r;
	}
	cuh=0;
	int flag=0;
	for(i=lp;i<=rp;i++)
	{
		if(cuh!=a[i])
		{
			if(flag) _p(" ");
			_p("%d %d",i-1,a[i]);
			cuh=a[i];
			flag=1;
		}
	}
	
	_p(" %d 0\n",rp);

	return 0;
}