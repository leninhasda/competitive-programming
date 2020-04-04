#include<iostream>
using namespace std;

#define max 300



int main()
{
	char s1[max],s2[max];
	while(scanf("%s %s",&s1,&s2)!=EOF)
	{
		int num1[max],num2[max],res[max];
		int i,j;

		memset(num1,0,sizeof(num1));
		memset(num2,0,sizeof(num2));
		memset(res,0,sizeof(res));

		j=0;
		for(i=strlen(s1)-1;i>=0;i--)
			num1[j++]=s1[i]-48;
		j=0;
		for(i=strlen(s2)-1;i>=0;i--)
			num2[j++]=s2[i]-48;

		int car=0,sum=0;
		for(i=0;i<max;i++)
		{
			car=0;
			for(j=0;j<max;j++)
			{
				sum=res[i+j]+car+num1[j]*num2[i];
				res[i+j]=sum%10;
				car=sum/10;
			}
		}

		for(i=max-1;i>0;i--)
		{
			if(res[i]!=0)
				break;
		}

		for(i;i>=0;i--)
			printf("%d\n",res[i]);
	}
	return 0;
}
