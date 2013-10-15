#include<iostream>
using namespace std;

#define max 100

long long f[max];

void fib()
{
	f[0] = 1;
	f[1] = 2;

	int i = 2;
	for(i; i < max; i++)
		f[i] = f[i-1] + f[i-2];
}

int binarySearch(long long v, int l=0, int r=max-1)
{
	int mid = (l+r)/2;
	long long midV = f[mid];

	if(v < midV)
	{
		mid = binarySearch(v, l, mid);
	}
	else if(v > midV)
	{
		mid = binarySearch(v, mid, r);
	}

	return mid;
}

void setS(char ch[])
{
	for(int i = 0;i < 110;i++)
		ch[i] = ' ';
}

int cpos = 0;

char nextC(char line[])
{
	while(cpos <= strlen(line))
	{
		if(line[cpos] >= 'A' && line[cpos] <= 'Z')
		{
			cpos++;
			return line[cpos-1];
		}
		cpos++;
	}
}

int main()
{
	fib();

	long long ar[110];
	int t, n, i, pos, k;
	char line[110], ch[2], res[110], c;

	while(scanf("%d",&t)==1)
	{
		while(t--)
		{
			cpos = 0;
			scanf("%d",&n);
			for(i = 0; i < n; i++)
				scanf("%lld",&ar[i]);
			gets(ch); // to erase the enter character
			gets(line);

			setS(res);

			for(i = 0; i < n; i++)
			{
				pos = binarySearch(ar[i]);
				
				c = nextC(line);

				res[pos] = c;
			}

			for(k = 109; k>=0;k--)
			{
				if(res[k] != ' ')
					break;
			}

			for(i=0;i<=k;i++)
				printf("%c",res[i]);
			printf("\n");
		}
	}
	
	return 0;
}