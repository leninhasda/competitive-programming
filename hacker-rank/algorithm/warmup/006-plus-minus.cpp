#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, in;
    cin >> n;
    int pos=0, neg=0, zer=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> in;
       if(in < 0) {
           neg++;
       } else if(in > 0) {
           pos++;
       } else if(in == 0) {
           zer++;
       }
    }
    double fr_pos = (pos*1.0) / (n * 1.0),
    fr_neg = (neg*1.0) / (n*1.0),
    fr_zer = (zer*1.0) / (n*1.0);
    printf("%0.6lf\n%0.6lf\n%0.6lf\n", fr_pos, fr_neg, fr_zer);
    return 0;
}

