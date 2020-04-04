// http://www.lightoj.com/volume_showproblem.php?problem=1000
// 1000 - Greetings from LightOJ

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long int t, cs, a, b;

    scanf("%ld", &t);

    for(cs=1; cs<=t; cs++)
    {
        scanf("%ld %ld", &a, &b);

        printf("Case %ld: %ld\n", cs, (a+b));
    }
    return 0;
}
