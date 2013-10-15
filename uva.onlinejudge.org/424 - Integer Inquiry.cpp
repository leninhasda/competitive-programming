#include<stdio.h>
#include<string.h>

#define size 1000 /* defines size of array */

int num1[size], num2[size], res[size];

void init()
{
	memset(num1, 0, sizeof(num1));
	memset(num2, 0, sizeof(num2));
	memset(res, 0, sizeof(res));
}

void add()
{
	int i, sum, car;

	for(i = 0, car = 0; i < size; i++)
	{
		sum = num1[i] + num2[i] + car;
		car = sum / 10;
		sum = sum % 10;

		res[i] = sum;
	}
}

int main()
{
	char n[size];
	int len, i, k;

	init();

	while(scanf("%s",&n)==1)
	{	
		if(n[0] == '0')
			break;
		len = strlen(n);
				
		for(i = (len-1), k = 0; i >= 0; i--)
		{
			num2[k++] = n[i] - '0';
		}
		
		add();

		for(i=0;i<size;i++)
			num1[i] = res[i];

	}

	for(i = (size-1); i > 0; i--)
	{
		if(res[i])
			break;
	}

	for(i;i>=0;i--)
		printf("%d",res[i]);

	printf("\n");


	return 0;
}