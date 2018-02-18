#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int hh, mm, ss;
    string ampm;
    scanf("%d:%d:%d", &hh,&mm,&ss);
    cin>>ampm;
    
    if(ampm == "PM" && hh!= 12) {
        hh+=12;
    }
    if((ampm == "AM" && hh == 12) || hh == 24 ) {
        hh = 0;
        //cout<<hh<<endl;
    }
    //if((ampm == "AM" && hh == 12) || false ) {
    //    cout<<ampm<<endl;
    //    cout<<hh<<endl;
    //}
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    //cout<<ampm;
    return 0;
}

