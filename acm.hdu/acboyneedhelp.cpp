#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
	queue<int> q;
	stack<int> s;
	int i,n,j,m,in,tmp;
	char type[5],cmd[4];

	while(cin>>n)
	{
		for(i=0;i<n;i++)
		{
			while(q.size()!=0)
				q.pop();
			while(s.size()!=0)
				s.pop();
			cin>>m;
			cin>>type;
			if(!strcmp(type,"FIFO"))
			{
				for(j=0;j<m;j++)
				{
					cin>>cmd;
					if(!strcmp(cmd,"IN"))
					{
						cin>>in;
						q.push(in);
					}
					if(!strcmp(cmd,"OUT"))
					{
						if(q.empty())
						{
							cout<<"None"<<endl;
						}
						else
						{
							tmp=q.front();
							cout<<tmp<<endl;
							q.pop();
						}
					}
				}
			}
			if(!strcmp(type,"FILO"))
			{
				for(j=0;j<m;j++)
				{
					cin>>cmd;
					if(!strcmp(cmd,"IN"))
					{
						cin>>in;
						s.push(in);
					}
					if(!strcmp(cmd,"OUT"))
					{
						if(s.empty())
						{
							cout<<"None"<<endl;
						}
						else
						{
							tmp=s.top();
							cout<<tmp<<endl;
							s.pop();
						}
					}
				}
			}
		}
	}

	return 0;
}