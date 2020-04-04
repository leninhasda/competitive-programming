#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool isU(char ch)
{
    if(ch >= 'A' && ch <= 'Z') return true;
    return false;
}

bool isL(char ch)
{
    if(ch >= 'a' && ch <= 'z') return true;
    return false;
}

int main()
{
    char word[105];
    int i, len;
    bool flag;

    while(scanf("%s", &word)==1)
    {
        len = strlen(word);

        if(isL(word[0]))
        {
            flag = true;
            for(i=1; i<len; i++)
            {
                if(!isU(word[i]))
                {
                    flag = false;
                    true;
                }
            }
            if(flag)
            {
                printf("%c", char(word[0]-32));
                for(i=1; i<len; i++)
                {
                    printf("%c", char(word[i]+32));
                }
                printf("\n");
            }
            else
            {
                printf("%s\n", word);
            }
        }
        else
        {
            flag = true;
            for(i=0; i<len; i++)
            {
                if(!isU(word[i]))
                {
                    flag = false;
                    true;
                }
            }
            if(flag)
            {
             //   printf("%c", char(word[0]-32));
                for(i=0; i<len; i++)
                {
                    printf("%c", char(word[i]+32));
                }
                printf("\n");
            }
            else
            {
                printf("%s\n", word);
            }
        }
    }

    return 0;
}
