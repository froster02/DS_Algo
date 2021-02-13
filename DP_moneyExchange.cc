#include <iostream>
#include <climits>
#include <algorithm>
#define maxm 100
using namespace std;

//  TOP DOWN
int minCoins(int n, int coins[], int t, int dp[]){
    //base case
    if(n == 0)
        return 0;

    //look up
    if(dp[n] != 0)
        return dp[n];
    
    //recursive case
    int ans = INT_MAX;
    for(int i = 0; i < t; i ++){
        if(n - coins[i] >= 0) {
            int subprblm = minCoins(n - coins[i], coins, t, dp);
            ans = min(ans, subprblm + 1);
        }
    }
    dp[n] = ans;
    return dp[n];
}

//BUTTOM UP
int minCoins2(int n, int coins[], int t){
    int dp[100] = {0};
    
    //iterate over all states
    for(int j = 1; j <= n; j++){
        //initialize the current ans as int_max
        dp[j] = INT_MAX;
        for(int i = 0; i < t; i++){
            if(j - coins[i] >= 0) {
                int subprblm = dp[j - coins[i]];
                dp[j] = min(dp[j], subprblm + 1);
            }
        }
    }
    return dp[n];
}

int main() {

    int n = 15;
    int coins[] = {1, 7, 10};
    int dp[maxm] = {0};
    int t = sizeof(coins) / sizeof(int);

    cout << minCoins(n, coins, t, dp) << endl;
    cout << minCoins2(n, coins, t) << endl;

    return 0;
}