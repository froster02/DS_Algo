#include <iostream>
#include <algorithm>
using namespace std;

int max_profit(int price[], int n){
    //base case
    if(n <= 0) {return 0;}

    //recursive case
    int ans = INT_MIN;

    for(int i = 0; i < n; i++){
        int cut = i + 1;
        int current_ans = price[i] + max_profit(price, n - cut);
        ans = max(ans, current_ans);
    }
    return ans;
}

int max_profit_DP(int price[], int n){
    
    int dp[n + 1];
    dp[0] = 0;

    for(int len = 1; len <= n; len++){
        int ans = INT_MIN;
        for(int i = 0; i < len; i++){
            int cut = i + 1;
            int current_ans = price[i] + dp[len - cut];
            ans = max(current_ans, ans);
        }
        dp[len] = ans;
        cout << endl;
        cout << ans << ","; 
    }
    return dp[n];
}

int main(){
    int p[] = {1,5,8,9,10,17,17,20};
    int n = sizeof(p)/sizeof(p[0]);
    cout << max_profit(p, n);
    cout << endl;
    cout << max_profit_DP(p, n);
}