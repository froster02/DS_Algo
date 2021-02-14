#include <iostream>
using namespace std;

//* TOP DOWN
int ladder_topDown(int n, int k, int dp[]) {
    //base case 
    if(n == 0)
        return 1;
    
    //look up
    if(dp[n] != 0)
        return dp[n];

    //recursive case
    int ways = 0;
    for(int i = 1; i <= k; i++){
        if(n - i >= 0){
            ways = ways + ladder_topDown(n - i, k , dp);
        }
    }
    return dp[n] = ways;
}

//* BUTTOM UP
int ladder_buttomUp(int n, int k){
    int dp[100] = {0};
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        dp[i] = 0;
        for(int j = 1; j <= k; j++){
            if(i - j >= 0)
                dp[i] = dp[i] + dp[i - j];
        }
    }

    for(int i = 0; i <= n; i++)
        cout << dp[i] << " ";
    cout << endl;

    return dp[n];
}

//* Optimized
int ladder_optimized(int n, int k){
    int dp[100] = {0};
    dp[0] = dp[1] = 1;

    for(int i = 2; i <= k; i++)
        dp[i] = 2 * dp[i - 1];

    for(int i = k + 1; i <=n; i++)
        dp[i] = 2 * dp[i - 1] - dp[i - k - 1];

    for(int i = 0; i <= n; i++)
        cout << dp[i] << " ";
    cout << endl;
    
    return dp[n];
}

int main(){

    int n, k, dp[100] = {0};
    cin >> n >> k;

    cout << ladder_topDown(n, k, dp) << endl;

    cout << ladder_buttomUp(n, k) << endl;

    cout << ladder_optimized(n, k) << endl;

    return 0;
}