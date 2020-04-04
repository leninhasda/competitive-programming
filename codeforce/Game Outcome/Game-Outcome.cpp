#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
//#define INT_MAX 2147483647
//#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL
using namespace std;

#define mx 32

int col[mx], row[mx];
//int arr[mx][mx];

int main ()
{
    int n, in;
    int i, j;
    
    scanf("%d", &n);
    memset(col, 0, sizeof(col));
    memset(row, 0, sizeof(row));
    for(i=0; i<n; i++)
    {
         for(j=0; j<n; j++)
         {
              scanf("%d", &in);
              col[j] += in;
         }
         row[i] += in;
    }
    cout<<"Input Complete..."<<endl;
    for(i=0; i<n; i++)
    {
//         for(j=0; j<n; j++)
         {
              printf("%d %d\n", col[i], row[i]);
         }
    }
    
    system("PAUSE");
    
	return 0;
}
