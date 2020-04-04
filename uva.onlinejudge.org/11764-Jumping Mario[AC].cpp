#include<iostream>
using namespace std;

int main()
{
	int t,N,jmp[55],i,j,high,low;
	
	while(cin>>t)
	{
		for(i=0;i<t;i++)
		{
			cin>>N;
			for(j=0;j<N;j++)
				cin>>jmp[j];
			high = 0;
			low = 0;
			for(j=0;j<N-1;j++)
			{
				if(jmp[j]==jmp[j+1])
					continue;
				if(jmp[j]<jmp[j+1])
					high++;
				else
					low++;
			}
			cout<<"Case "<<i+1<<": "<<high<<" "<<low<<endl;
		}
	}

	return 0;
}