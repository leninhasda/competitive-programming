// 11541 - Decoding
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
using namespace  std;

int main()
{
    int t, cs;
    string line;
    scanf("%d", &t);
    int tms,i,len;
    char ch;
    for(cs=1;cs<=t;cs++)
    {
        //scanf("%s", &line);
        cin>>line;
        printf("Case %d: ",cs);
        do
        {
            sscanf(line.c_str(), "%c%d",&ch,&tms);
            for(i=0;i<tms;i++)
                printf("%c",ch);
            line.erase(line.begin());
            for(i=0;;)
            {
                if(!line.size() || (line[i] >= 'A' && line[i] <= 'Z'))  break;
                else line.erase(line.begin());
            }
        }while(line.size());
        printf("\n");
    }
    return 0;
}
