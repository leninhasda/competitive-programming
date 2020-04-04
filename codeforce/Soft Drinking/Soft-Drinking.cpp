#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    int total_drink;

    cout<<"1"<<endl;

    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &p, &nl, &np);

    cout<<"2"<<endl;

    int
    one_drink = n * nl,
    one_slice = n * 1,
    one_salt  = n * np,

    total_drinks = k * l,
    total_slices = c * d,
    total_salts  = p * 1;

    int toast = 0;

    cout<<"3"<<endl;

    while(total_drinks >= one_drink &&
          total_slices >= one_slice &&
          total_salts  >= one_salt) {

        toast++;
        cout<<"8"<<endl;

        total_drinks -= one_drink;
        total_slices -= one_slice;
        total_salts  -= one_salt;
    }

    cout<<"9"<<endl;
    printf("%d\n", toast);

    return 0;
}
