#include<iostream>
using namespace std;

int main()
{
	long int in,j,i,sum,ca;
	
	while(cin>>in)
	{	
		int num1[2010]={0},num2[2010]={0},num3[2010]={0},num4[2010]={0};
		int res[2010]={0};

		num1[0]=1; num2[0]=1; num3[0]=1; num4[0]=1;

		if(in==1 || in==2 || in==3 || in==4)
		{
			cout<<"1"<<endl;
			continue;
		}
		for(j=4;j<in;j++)
		{
			sum=0;ca=0;
			for(i=0;i<2010;i++)
			{
				sum = num1[i] + num2[i] + num3[i] + num4[i] + ca;
				res[i] = sum%10;
				ca = sum/10;
			}
			for(i=0;i<2010;i++)
			{
				num1[i] = num2[i];
				num2[i] = num3[i];
				num3[i] = num4[i];
				num4[i] = res[i];
			}
			memset(res,0,sizeof(res));
		}

		for(i=2010-1;i>=1;i--)
		{			
			if(num4[i]!=0)
				break;
		}
		for(i;i>=0;i--)
		{			
			cout<<num4[i];
		}

		cout<<endl;
	}
	return 0;
}