#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXWEIGHT 25100 // The maximum sum of coins is 50000, so the maximum possible to get is 50000/2 = 25000
#define MAXITENS 110

int c[MAXITENS][MAXWEIGHT];

void dp_01_knapsack(int weights[], int values[], int n, int W){
    int w, i;
    //for (w = 0; w <= W; w++)
    //    c[0][w] = 0;
    memset(c[0], 0, sizeof(int) * (W+1));
    for (i = 1; i <= n; ++i){
        c[i][0] = 0;
        for (w = 1; w <= W; ++w){
            if ((weights[i] <= w) && (values[i] + c[i-1][w-weights[i]])){
                c[i][w] = values[i] + c[i-1][w-weights[i]];
            }else{
                c[i][w] = c[i-1][w];
            }
        }
    }
    #ifdef _DEBUG_
    for (i = n, w = W; i > 0; --i){
        if (c[i][w] != c[i-1][w]){
            printf("Take %d\n", weights[i]);
            w -= weights[i];
        }else{
            printf("Leave %d\n", weights[i]);
        }
    }
    #endif
}

int getdiff(int coins[], int ncoins, int sum){
    int i, w;
    int tot_take = 0, tot_leave = 0;
    
    dp_01_knapsack(coins, coins, ncoins, sum/2);
    
    for (i = ncoins, w = sum/2; i > 0; --i){
        if (c[i][w] != c[i-1][w]){
            tot_take += coins[i];
            w -= coins[i];
        }else{
            tot_leave += coins[i];
        }
    }
    return tot_leave > tot_take ? tot_leave - tot_take : tot_take - tot_leave;
}

int main(void){
    int ncases, ncoins, sum, i;
    int coins[MAXITENS];
    
    scanf(" %d", &ncases);
    while(ncases--){
        sum = 0;
        scanf(" %d", &ncoins);
        for (i = 1; i <= ncoins; i++){
            scanf(" %d", &coins[i]);
            sum += coins[i];
        }
        printf("%d\n", getdiff(coins, ncoins, sum));
    }
    return 0;
} 