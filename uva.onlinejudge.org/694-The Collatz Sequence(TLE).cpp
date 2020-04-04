#include<iostream>
using namespace std;

int call(int n,int term)
{
	int count=1;
label:if(n==1)
		return count;
	  if(n>term)
		  return count-1;
	if(n%2==1)
	{
		n=3*n+1;
		count++;
	}
	else
	{
		n=n/2;
		count++;
	}
	goto label;
}

int main()
{
	int n,m,term,cnt=0;

	while(cin>>n>>m)
	{
		cnt++;
		if(n<0 && m<0)
			break;
		term=call(n,m);
		cout<<"Case "<<cnt<<": A = "<<n<<", limit = "<<m<<", number of terms = "<<term<<"\n";
	}	

	return 0;
}