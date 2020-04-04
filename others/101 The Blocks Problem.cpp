// http://uva.onlinejudge.org/external/1/101.html
// 101 The Blocks Problem

#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

struct A
{
    vector<int> v;
}data[30];

int main()
{
    int n, a, b;
    int i;
    char cmd[10];

    while(scanf("%d", &n)==1)
    {
        for(i=0; i<n; i++)
        {
            data[i].v.clear();
            data[i].v.push_back(i);
        }

        while(scanf("%s", &cmd)==1)
        {
            if(strcmp(cmd, "quit")==0) break;

            if(strcmp(cmd, "move")==0)
            {
                scanf("%d %s %d", &a, &cmd, &b);

                if(strcmp(cmd, "onto")==0)
                {

                }
                else if(strcmp(cmd, "over")==0)
                {
                }
            }
            else if(strcmp(cmd, "pile")==0)
            {
                scanf("%d %s %d", &a, &cmd, &b);

                if(strcmp(cmd, "onto")==0)
                {
                }
                else if(strcmp(cmd, "over")==0)
                {
                }
            }
        }
    }

    return 0;
}
