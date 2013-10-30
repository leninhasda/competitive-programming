#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main()
{
	//freopen("694.txt", "w", stdout);
	long A, AA, L, cs=1, cnt;

	while(scanf("%ld %ld", &A, &L) != EOF)
	{
		if(A < 0 && L < 0) break;
		AA = A;
		for(cnt = 1; A!=1 ; cnt++)
		{
			//if(A == 1) break;
			if(A%2 == 0) A=A/2;
			else A=3*A+1;		
			if(A > L) break;
		}
		printf("Case %ld: A = %ld, limit = %ld, number of terms = %ld\n", cs++, AA, L, cnt);
	}	

	return 0;
}