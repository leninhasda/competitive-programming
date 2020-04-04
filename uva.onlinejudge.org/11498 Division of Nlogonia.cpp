// http://uva.onlinejudge.org/external/114/11498.html
// 11498 Division of Nlogonia

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int k;
    int n, m, x, y;

    while(scanf("%d", &k)==1)
    {
        if(!k) break;
        scanf("%d %d", &n, &m);

        while(k--)
        {
            scanf("%d %d", &x, &y);

            if(x == n || y == m)
            {
                printf("divisa\n");
            }
            else
            {
                if(x > n)
                {
                    if(y > m)
                    {
                        printf("NE\n");
                    }
                    else if(y < m)
                    {
                        printf("SE\n");
                    }
                }
                else if(x < n)
                {
                    if(y > m)
                    {
                        printf("NO\n");
                    }
                    else if(y < m)
                    {
                        printf("SO\n");
                    }
                }
            }
        }
    }

    return 0;
}
