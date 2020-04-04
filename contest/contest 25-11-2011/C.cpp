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

int main()
{
    __int64 m, n, t;;

    scanf("%I64d %I64d %I64d", &n, &m, &t);

    __int64 x,y,z,tt,nm;
    x = nCr(n, 4);
    //printf("%I64d\n", (x));
    y = m;
    //printf("%I64d\n", (y));
    tt = t-5;
    //printf("%I64d\n", (tt));
    nm = n-4 + m-1;
    //printf("%I64d\n", (nm));
    z = nCr(nm, tt);
    //printf("%I64d\n", (z));

    printf("%I64d\n", (x*y*z));

    return 0;
}
