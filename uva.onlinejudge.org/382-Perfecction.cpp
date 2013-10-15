#include<iostream>
using namespace std;

int main()
{
	int ary[100],idx=0,d[100],m;
	int in,i,j,total;
	while(cin>>in)
	{
		if(!in)
			break;
		ary[idx++]=in;
	}
	cout<<"PERFECTION OUTPUT"<<endl;
	for(i=0;i<idx;i++)
	{
		m=0;
		for(j=1;j<ary[i];j++)
		{
			if(ary[i]%j==0)
				d[m++]=j;
		}
		total=0;
		for(j=0;j<m;j++)
			total+=d[j];
		printf("%5d  ",ary[i]);
		if(ary[i]==total)
			printf("PERFECT\n");
		else if(ary[i]>total)
			printf("DEFICIENT\n");
		else if(ary[i]<total)
			printf("ABUNDANT\n");
	}
	cout<<"END OF OUTPUT"<<endl;
	return 0;
}