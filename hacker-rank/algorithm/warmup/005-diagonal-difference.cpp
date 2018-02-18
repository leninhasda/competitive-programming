#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > aaa(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> aaa[a_i][a_j];
       }
    }
    
    int half = n/2;
    int i,j,ii,jj,a,b,aa,bb;
    int sumij=0,sumab=0;
    for(int x=0; x < half; x++) {
        i=x;j=x;
        ii=n-x-1;jj=n-x-1;
        sumij+=aaa[i][j]+aaa[ii][jj];
        
        a=x;b=n-x-1;
        aa=n-x-1;bb=x;
        sumab+=aaa[a][b]+aaa[aa][bb];
    }
    //cout<<sumij<<endl;
    //cout<<sumab<<endl;
    //if(sumij < 0) { 
    //    sumij *= -1;
    //}
    //if(sumab < 0) {
    //    sumab *= -1;
    //}
    //if(n%2 == 1) {
    //    sumij +=aaa[half][half];
    //    sumab +=aaa[half][half];
    //}
    //cout<<sumij<<endl;
    //cout<<sumab<<endl;
    int diff = (sumij - sumab);
    if(diff < 0) {
        diff *= -1;
    }
    cout<<diff<<endl;
    return 0;
}

