#include <iostream>
using namespace std;

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

int main(){

    int n, k, dp[100] = {0};
    cin >> n >> k;

    cout << ladder_topDown(n, k, dp) << endl;

    return 0;
}