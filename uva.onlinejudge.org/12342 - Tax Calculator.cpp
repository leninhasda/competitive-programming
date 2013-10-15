#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t, cs;
    long int in, tax;

    scanf("%d", &t);
    for(cs=1; cs<=t; cs++)
    {
        scanf("%ld", &in);
        tax = 0;
        if(in > 180000)
        {
            // first 180000 is free
            in -= 180000;

            // for next 300000 .1
            if(in)
            {
                if(in >= 300000)
                {
                    tax += 30000;
                    in -= 300000;
                }
                else
                {
                    tax += ceil((double)(in * .1));
                    in = 0;
                }
            }

            // for next 400000 .15
            if(in)
            {
                if(in >= 400000)
                {
                    tax += 60000;
                    in -= 400000;
                }
                else
                {
                    tax += ceil((double)(in * .15));
                    in = 0;
                }
            }

            // for next 300000 .2
            if(in)
            {
                if(in >= 300000)
                {
                    tax += 60000;
                    in -= 300000;
                }
                else
                {
                    tax += ceil((double)(in * .2));
                    in = 0;
                }
            }

            // for rest .25
            if(in)
            {
                tax += ceil((double)(in * .25));
                in = 0;
            }
        }

        //
        if(tax > 0 && tax < 2000) { tax = 2000; }
        printf("Case %d: %ld\n", cs, tax);
    }

    return 0;
}
