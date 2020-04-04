#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int nCr(int n, int r) {
    return nCr(n-1, r) * nCr(n-1, r-1);
}

int main() {

    int a = nCr(4,2);

    cout<<a<<endl;
    return 0;
}
