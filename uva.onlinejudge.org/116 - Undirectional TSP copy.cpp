#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

#define R 11
#define C 101
#define min(a,b,c) (a<b)?(a<c)?
int m, n;
int M[R][C];



int main() {

    int i, j;

    while(scanf("%d %d", &m, &n) == 2) {
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                scanf("%d", &M[i][j]);
            }
        }

        for(j = 1; j < n; j++) {
            for(i = 0; i < m; i++) {

            }
        }
    }

    return 0;
}
