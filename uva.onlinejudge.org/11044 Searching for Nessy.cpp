// http://uva.onlinejudge.org/external/110/11044.html
// 11044 Searching for Nessy

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t, n, m;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", (int(n/3)*int(m/3)));
    }

    return 0;
}
