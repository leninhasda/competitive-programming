#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a,b,tmpa,m;
	char arr[1000];

	while(scanf("%d %d",&a,&b)!=EOF)
	{
		tmpa=a;
		sprintf(arr,"%d",a);
		a=int(arr[strlen(arr)-1])-48;
		
		m=b%4;

		if(m==1)
		{
			a=pow(a,1);
			sprintf(arr,"%d",a);
			a=int(arr[strlen(arr)-1])-48;
		}
		else if(m==2)
		{
			a=pow(a,2);
			sprintf(arr,"%d",a);
			a=int(arr[strlen(arr)-1])-48;
		}
		else if(m==3)
		{
			a=pow(a,3);
			sprintf(arr,"%d",a);
			a=int(arr[strlen(arr)-1])-48;		
		}
		else if(m==0 || m==4)
		{
			a=pow(a,4);
			sprintf(arr,"%d",a);
			a=int(arr[strlen(arr)-1])-48;
		}

		printf("%d\n",a);
	}

	return 0;
}