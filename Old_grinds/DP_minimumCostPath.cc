#include <iostream>
#define r 3
#define c 3
using namespace std;

int dp[100][100];

int minCost(int cost[][c], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 && j == 0)    
                dp[i][j] = cost[0][0];
            else if(i == 0)
                dp[i][j] = dp[0][j - 1] + cost[0][j];
            else if(j == 0)
                dp[i][j] = dp[i - 1][0] + cost[i][0];
            else 
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + cost[i][j];
        }
    }
    return dp[r - 1][c - 1];
}

int main(){

    int cost[r][c] = {  {1, 5, 2},
                        {7, 1, 1},
                        {8, 1, 3} };

    cout << minCost(cost, r, c);
}