#include<stdio.h>

int main()
{
	int v,t,s;
	while(scanf("%d %d",&v,&t) == 2)
	{
		if(v>=(-100) && v<= 100)
		{
			if(t>=0 && t<=200)
			{
				s=v*(t*2);
			}
		}
		printf("%d\n",s);
	}
	return 0;
}