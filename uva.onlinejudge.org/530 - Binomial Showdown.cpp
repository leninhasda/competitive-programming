// 530 - Binomial Showdown 

#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

typedef long long Long;

Long findGCD(Long a, Long b)
{
	if(a%b == 0) return b;
	return findGCD(b, a%b);
}

void divByGCD(Long &a, Long &b)
{
	Long gcd = findGCD(a,b);
	a/=gcd; b/=gcd;
}

Long c(Long n, Long k)
{
	Long i, toMul, toDiv, nu=1, de=1;
	if(k > n/2) k = n-k;
	for(i=k;i;i--)
	{
		toMul = n-k+i; toDiv = i;
		divByGCD(toMul, toDiv);
		divByGCD(nu, toDiv);
		divByGCD(de, toMul);
		nu *= toMul; de *= toDiv;
	}
	return nu/de;
}

int main()
{
	Long n, k;
	while(scanf("%lld %lld", &n, &k) ==2)
	{
		if(!k && !n) break;
		if(k < 2){
			if(!k) printf("1\n");
			else printf("%lld\n", n);
		} else {
			printf("%lld\n", c(n,k));
		}
	}

	return 0;
}