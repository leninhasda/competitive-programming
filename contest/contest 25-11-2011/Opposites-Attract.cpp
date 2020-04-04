#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

#define mx 12

//typedef __int64 ____int6464

__int64 pls[mx];
__int64 mns[mx];

__int64 gcd(__int64 a, __int64 b)
{
    if(a%b == 0)
        return b;
    return gcd(b, a%b);
}

void Divbygcd(__int64& a, __int64& b)
{
    __int64 g = gcd(a, b);
    a /= g;
    b /= g;
}

__int64 nCr(__int64 n, __int64 k)
{
    __int64 numerator = 1,
        denominator = 1,
        toMul, toDiv, i;

    if( k > (n/2))
        k = n-k;

    for(i=k; i; i--)
    {
        toMul = n-k+i;
        toDiv = i;
        Divbygcd(toMul, toDiv);
        Divbygcd(numerator, toDiv);
        Divbygcd(toMul, denominator);
        numerator *= toMul;
        denominator *= toDiv;
    }

    return numerator/denominator;
}

void insert(int n)
{
    if(n<0)
    {
        n = n*(-1);
        mns[n]++;
    }
    else
    {
        pls[n]++;
    }
}

int main()
{
    int n, i, tmp;

    scanf("%d", &n);

    memset(pls, 0, sizeof(pls));
    memset(mns, 0, sizeof(mns));

    for(i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        insert(tmp);
    }

    __int64 ans = 0;

    ans += nCr(pls[0], 2);

    for(i=1; i<mx; i++)
    {
        ans += (pls[i] * mns[i]);
    }

    printf("%I64d\n", ans);

    return 0;
}
