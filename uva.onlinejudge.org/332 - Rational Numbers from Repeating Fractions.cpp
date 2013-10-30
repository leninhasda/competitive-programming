// 332 - Rational Numbers from Repeating Fractions

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;

typedef long long Int;

Int pw(Int n)
{
	Int i=0, x=1;
	for(i, x; i<n; i++)
		x *= 10;
	return x;
}
Int findGCD(Int a, Int b)
{
	if(b == 0) return a;
	return findGCD(b, a%b);
}

int main()
{
	//freopen("332.txt", "w", stdout);
	Int j, k, nu, du, cs=1, gcd;
	//double x;
	Int x;
	Int n1, n2, n3;
	char line[15];
	while(scanf("%lld", &j) != EOF)
	{
		if(j < 0)break;
		scanf("%s", &line);
		k = strlen(line) - 2 - j;
		//printf("%I64d:%I64d\n", j, k);
		//sscanf(line, "%lf", &x);
		sscanf(line, "0.%lld", &x);
		//n1 = floor(pw(k+j)*x);
		//n2 = floor(pw(k)*x);		
		n1 = pw(k+j); n2 = pw(k); n3 = pw(j+k-1);
		//printf("%I64d:%I64d:%I64d\n", n1, n2, n3);
		if(j) {
			nu = x - floor((n2*1.0/n1)*x); du = n1 - n2;
		}
		else {
			nu = x; du = n2;
		}
		//printf("%I64d\n",x);
		//printf("%I64d:%I64d\n",((n1/n3)*x),((n2/n3)*x));
		//cout<<k<<":"<<j<<":"<<x<<endl;
		//printf("%I64d:%I64d\n",nu,du);
		gcd = findGCD(nu, du);
		//printf("%I64d\n",gcd);
		if(gcd > 1)
			printf("Case %lld: %lld/%lld\n", cs++, (nu/gcd), (du/gcd));
		else
			printf("Case %lld: %lld/%lld\n", cs++, (nu), (du));
	}	
	
	return 0;
}
