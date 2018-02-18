#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    char space=' ', symb='#';
    cin >> n;
    
    for(int i=0; i < n; i++) {
        for(int j=0; j<n;j++) {
            if(j < (n-i-1)) {
                cout<<space;
            } else {
                cout<<symb;
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}

