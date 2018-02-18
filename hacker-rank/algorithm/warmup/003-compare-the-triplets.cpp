#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int alice=0, bob=0;

void calculate(int a, int b) {
    if( a > b ) {
        alice+=1;
    } else if( a < b) {
        bob+=1;
    }
}
    

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    
    alice=bob=0;
    calculate(a0,b0);
    calculate(a1,b1);
    calculate(a2,b2);
    
    printf("%d %d\n", alice, bob);    
    
    return 0;
}