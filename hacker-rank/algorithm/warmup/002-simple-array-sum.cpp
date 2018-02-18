#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int in, sum;
    sum=0;
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d", &in);
        sum+=in;
    }
    printf("%d\n", sum);
    return 0;
}

