// http://uva.onlinejudge.org/external/115/11541.html
// 11541 Decoding

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    char line[5000], tmp[250];
    char ch;
    int t, cs, len, idx, num;
    int i, j;

    scanf("%d\n", &t);

    for(cs=1; cs<=t; cs++)
    {
        if(cs>1)
            printf("\n");
        scanf("%s", &line);

        len = strlen(line);

        idx=0; ch=' '; tmp[0] = '0'; tmp[1] = '\0'; num = 0;

        printf("Case %d: ", cs);

        for(i=0; i<len; i++)
        {
            if(line[i] >= 'A' && line[i] <='Z')
            {
                sscanf(tmp, "%d", &num);
                for(j=0;j<num;j++)
                {
                    printf("%c", ch);
                }
                ch = line[i];
                idx = 0;
            }
            else
            {
                tmp[idx] = line[i];
                idx++;
            }
        }
        sscanf(tmp, "%d", &num);
        for(j=0;j<num;j++)
        {
            printf("%c", ch);
        }
        //printf("\n");
    }

    return 0;
}
