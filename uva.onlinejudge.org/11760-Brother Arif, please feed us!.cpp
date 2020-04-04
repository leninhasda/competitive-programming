#include<iostream>
using namespace std;

struct
{
	int r,c;
}pset[2005],ba;

int main()
{
	int R,C,N,i,cnt=1;

	while(cin>>R>>C>>N)
	{
		if(!R && !C && !N)
			break;
		bool esc = false;
		for(i=0;i<N;i++)
		{
			cin>>pset[i].r>>pset[i].c;
		}
		cin>>ba.r>>ba.c;
		for(i=0;i<N;i++)
		{
			if((ba.r-1)==pset[i].r || (ba.c)==pset[i].c)
			{
				esc = false;
				break;
			}
			else
				esc = true;
		}
		for(i=0;i<N;i++)
		{
			if((ba.r)==pset[i].r || (ba.c-1)==pset[i].c)
			{
				esc = false;
				break;
			}
			else
				esc = true;
		}
		for(i=0;i<N;i++)
		{
			if((ba.r)==pset[i].r || (ba.c+1)==pset[i].c)
			{
				esc = false;
				break;
			}
			else
				esc = true;
		}
		for(i=0;i<N;i++)
		{
			if((ba.r+1)==pset[i].r || (ba.c+1)==pset[i].c)
			{
				esc = false;
				break;
			}
			else
				esc = true;
		}
		if(esc)
			cout<<"Case "<<cnt++<<": Escaped again! More 2D grid problems!"<<endl;
		else
			cout<<"Case "<<cnt++<<": Party time! Let's find a restaurant!"<<endl;
	}

	return 0;
}