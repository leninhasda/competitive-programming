#include<iostream>
using namespace std;

#define max 100

int main()
{
	char s1[max], s2[max];
	int num1[max], num2[max], res[max];
	int sum, car, i, k, idx;

	cin>>s1>>s2;

	memset(num1, 0, sizeof(num1));
	memset(num2, 0, sizeof(num2));
	memset(res, 0, sizeof(res));

	k = 0;

	for(i=strlen(s1)-1; i>=0; i--)
		num1[k++] = s1[i] - '0';
	k = 0;
	for(i=strlen(s2)-1; i>=0; i--)
		num2[k++] = s2[i] - '0';

	for(i=0;i<max;i++)
	{
		sum = car = 0;
		idx = i;
		for(k=0;k<max;k++)
		{
			sum = num1[k] * num2[i] + car + res[idx];
			car = sum / 10;
			sum = sum % 10;

			//res[idx] = res[idx] + sum ;
			res[idx++] = sum;
		}
	}

	for(i = max-1; i>0;i--)
	{
		if(res[i])
			break;
	}

	for(i;i>=0;i--)
		cout<<res[i];

	cout<<endl;

	return 0;
}
