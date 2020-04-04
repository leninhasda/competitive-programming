// http://uva.onlinejudge.org/external/113/11332.html
// 11332 Summing Digits

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char all[100];
    int i, len;
    long long ans;

    while(scanf("%lld", &ans)==1)
    {
        if(ans == 0) break;

        do
        {
            sprintf(all, "%lld", ans);
            len = strlen(all);
            ans = 0;
            for(i=0; i<len; i++)
            {
               ans += all[i] - '0';
            }
        }while(ans > 9);

        printf("%lld\n", ans);
    }

    return 0;
}
