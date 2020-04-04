#include<iostream>
using namespace std;

int main()
{
	int n,na[1000];
	int i,t;

	while(cin>>n)
	{
		if(!n)
			break;
		t=0;
		for(i=0;i<n;i++)
			cin>>na[i];
		t=6*na[0]+5;
		if(n==1)
		{
			cout<<t<<endl;
			continue;
		}		
		for(i=0;i<n-1;i++)
		{
			if(na[i]>na[i+1])
			{
				t += (na[i]-na[i+1])*4+5;
			}
			else if(na[i]<na[i+1])
			{
				t += (na[i+1]-na[i])*6+5;
			}
			else if(na[i]==na[i+1])
			{
				t += 5;
			}
		}
		cout<<t<<endl;
	}

	return 0;
}