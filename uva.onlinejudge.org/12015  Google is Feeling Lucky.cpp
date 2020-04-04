// http://uva.onlinejudge.org/external/120/12015.html
// 12015  Google is Feeling Lucky

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

typedef struct{
    char url[200];
    int freq;
}type;

type list[12];

bool operator<(type a, type b)
{
    if(a.freq > b.freq) return true;
    return false;
}

int main()
{
    int t, cs, i;

    scanf("%d", &t);

    for(cs=1; cs<=t; cs++)
    {
        for(i=0; i<10; i++)
        {
            scanf("%s %d", list[i].url, &list[i].freq);
        }

        sort(list, list+10);

        printf("Case #%d:\n", cs);
        printf("%s\n", list[0].url);

        for(i=1; i<10; i++)
        {
            if(list[0].freq == list[i].freq)
            {
                printf("%s\n", list[i].url);
            }
        }
    }

    return 0;
}
