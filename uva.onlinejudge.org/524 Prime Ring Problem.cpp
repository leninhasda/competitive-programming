// http://uva.onlinejudge.org/external/5/524.html
// 524 Prime Ring Problem
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;

int n;
bool visit[22];
int r[20];
int idx;

bool isPrime(int n)
{
       if(n==1) return false;
       if(n==2) return true;
       if(n%2==0) return false;

       int m = (int)sqrt(n*1.0);

       for(int i=3; i<=m; i++)
       {
               if(n%i==0)
                       return false;
       }

       return true;

}

void ring(int p)
{
       int i;

       for(i=2; i<=n;i++)
       {
               if(!visit[i] && isPrime(p+i))
               {
                       //cout<<" "<<i;
                       r[idx++] = i;
                       visit[i] = true;
                       ring(i);
                       visit[i] = false;
                       idx--;
               }
       }

       if(idx == n && isPrime(r[0]+r[n-1]))
       {
               for(i=0;i<n;i++)
               {
                       if(i!=0)
                               cout<<" ";
                       cout<<r[i];
               }
               cout<<endl;
       }
}

int main()
{

       int cs=0;
       while(cin>>n)
       {
             if(cs!=0)
                       cout<<endl;
               cs++;
               cout<<"Case "<<(cs)<<":"<<endl;

               for(int i=0;i<=n; i++)
               {
                       visit[i] = false;
               }

               visit[1] = true;
               r[0] = 1;
               idx = 1;

               ring(1);

            //   cout<<endl;
       }


       return 0;
}