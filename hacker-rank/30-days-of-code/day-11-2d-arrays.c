#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int arr[6][6];

int getSum(int x, int y) {
    int to = y+3;
    int sum = arr[x+1][y+1];
    for( int from = y; from < to; from++ ) {
        sum += arr[x][from];
        //printf("%d %d ", x, from);
    }
    for( int from = y; from < to; from++ ) {
        sum += arr[x+2][from];
        //printf("%d %d ", x+2, from);
    }
    //printf("%d\n", sum);
    return sum;
}

int main(){
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }

    int sum=0, high=-100;
    for(int arr_i = 0; arr_i < 4; arr_i++){
       for(int arr_j = 0; arr_j < 4; arr_j++){
          sum = getSum(arr_i, arr_j);
          if ( sum > high ) {
              high = sum;
          }
       }
    }

    printf("%d\n", high);

    return 0;
}
