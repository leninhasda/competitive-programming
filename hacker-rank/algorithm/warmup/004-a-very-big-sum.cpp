#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    long long input, sum=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> input;
       sum+=input;
    }
    cout<<sum<<endl;
    return 0;
}