#include<iostream>
using namespace std;

int mrk(char ch)
{
	switch(ch)
	{
	case 'A':
		return 4;
		break;
	case 'B':
		return 3;
		break;
	case 'C':
		return 2;
		break;
	case 'D':
		return 1;
		break;
	case 'F':
		return 0;
		break;
	case ' ':
		return 0;
		break;
	}

	return -1;
}

int main()
{
	char ch;
	int n,cnt;
	double ans;

	while(scanf("%c",&ch)!=EOF)
	{
		bool flag = true;
		int re;

		cnt = 0; n = 1;
		re = mrk(ch);
		
		if(re <0)
			flag = false;
		else
			cnt += re;

		while(scanf("%c",&ch)!=EOF)
		{
			if(ch == 10)
				break;

			re = mrk(ch);

			if(re >= 0 && flag)
				cnt += re;
			else if(re < 0)
				flag = false;

			if(ch != ' ')
				n++;
		}

		ans = (cnt * 1.0) / (n * 1.0);

		if(flag)
			printf("%.2lf\n",ans);
		else
			printf("Unknown letter grade in input\n");

	}
	return 0;
}