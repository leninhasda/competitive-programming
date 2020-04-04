// http://uva.onlinejudge.org/external/111/11172.html
// 11172 Relational Operators

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t;
    long long a, b;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%lld %lld", &a, &b);

        if(a < b)
        {
            printf("<\n");
        }
        else if(a > b)
        {
            printf(">\n");
        }
        else if(a == b)
        {
            printf("=\n");
        }
    }
}
