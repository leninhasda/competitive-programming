// http://uva.onlinejudge.org/external/119/11942.html
// 11942 Lumberjack Sequencing

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int t, a, b, n;
    bool ASC, ans;

    scanf("%d", &t);

    printf("Lumberjacks:\n");

    while(t--)
    {
        n = 8;
        ASC = ans = false;
        scanf("%d %d", &a, &b);

        if (a<b) {
            ASC = true;
            ans = true;
        } else {
            ASC = false;
            ans = true;
        }
        a = b;

        while(n--) {
            scanf("%d", &b);

            if (ASC) {
                if(a > b) {
                    ans = false;
                }
            } else {
                if (a < b) {
                    ans = false;
                }
            }

            a = b;
        }

        if(ans) {
            printf("Ordered\n");
        } else {
            printf("Unordered\n");
        }
    }

    return 0;
}
