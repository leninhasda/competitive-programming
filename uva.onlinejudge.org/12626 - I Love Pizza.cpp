// 12626 - I love Pizza

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int pz[26], t, i;//, len;
	//bool flag;//found
	char ch;//str[605];

	scanf("%d%c", &t, &ch);
	while(t--)
	{
		memset(pz, 0, sizeof(pz));
		while(scanf("%c", &ch))
		{
			if(ch == 32 || ch == '\n')break;
			pz[ch-'A']++;
		}
		
		for(i=0;;i++)
		{
			// m = 1
			pz['M'-'A'] -= 1; if(pz['M'-'A'] < 0) break;
			// a = 3
			pz['A'-'A'] -= 3; if(pz['A'-'A'] < 0) break;
			// r = 2
			pz['R'-'A'] -= 2; if(pz['R'-'A'] < 0) break;
			// g = 1
			pz['G'-'A'] -= 1; if(pz['G'-'A'] < 0) break;
			// i = 1
			pz['I'-'A'] -= 1; if(pz['I'-'A'] < 0) break;
			// t = 1
			pz['T'-'A'] -= 1; if(pz['T'-'A'] < 0) break;
		}
		printf("%d\n",i);
	}


	return 0;
}