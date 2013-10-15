#include<iostream>
using namespace std;

int main()
{
	char ch;
	int a['z'+1],high = 0,i;

	while(scanf("%c",&ch)!=EOF)
	{
		memset(a,0,sizeof(a));
		high = 0;
		
		a[ch]++;
		high = (a[ch] > high && ch != ' ')? a[ch]:high;

		while(scanf("%c",&ch)!=EOF)
		{
			if(ch == 10)
				break;
			a[ch]++;
		//	cout<<ch<<" "<<a[ch]<<" : ";
			high = (a[ch] > high && ch != ' ')? a[ch]:high;
		//	cout<<high<<endl;
		}

		for(i='A';i<('z'+1);i++)
		{
			if(a[i]==high)
				printf("%c",char(i));
		}
		printf(" %d\n",high);
	}

	return 0;
}