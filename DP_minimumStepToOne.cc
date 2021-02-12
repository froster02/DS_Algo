#include <iostream>
#include <climits>
#define maxm 100
using namespace std;

//  TOP DOWN
int minSteps1(int n, int dp[]){
    //base case
    if(n == 1)
        return 0;

    //if dp is already computed
    if(dp[n] != 0) {
        return dp[n];
    }

    //rec case
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    if(n % 3 == 0)
        op1 = minSteps1(n/3, dp) + 1;
    if(n % 2 == 0)
        op2 = minSteps1(n/2, dp) + 1;

    op3 = minSteps1(n - 1, dp) + 1;

    int ans = min(min(op1, op2), op3);

    return dp[n] = ans;
}

// BUTTOM UP
int minSteps2(int n) {
    int dp[maxm] = {0};
    dp[1] = 0;

    for(int i = 2; i <= n; i++){
        int op1, op2, op3;
        op1 = op2 = op3 = INT_MAX;

        if(n % 3 == 0)
            op1 = dp[i/3];
        if(n % 2 == 0)
            op2 = dp[i/2];
        
        op3 = dp[i - 1];

        dp[i] = min(min(op1, op2), op3) + 1;
    }
    return dp[n];
}

int main(){

    int n, dp[maxm] = {0};
    cin >> n;

    cout << minSteps1(n, dp) << endl;
    cout << minSteps2(n) << endl;

    return 0;
}