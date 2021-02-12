#include <iostream>
#include <climits>
using namespace std;

int minSteps(int n, int dp[]){
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
        op1 = minSteps(n/3, dp);
    if(n % 2 == 0)
        op3 = minSteps(n/2, dp);

    op3 = minSteps(n - 1, dp);

    int ans = min(min(op1, op2), op3) + 1;

    return dp[n] = ans;
}

int main(){

    int n, dp[maxm];
    cin >> n;

    cout << minSteps(n, dp);

    return 0;
}