#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i=0,tmp;
    while(scanf("%d", &tmp)==1)
    {
        if(tmp < 0) break;
        i++;
    }
    cout<<i<<endl;

    return 0;
}
