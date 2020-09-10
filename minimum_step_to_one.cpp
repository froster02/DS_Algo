#include <iostream>
#include <cstdio>
#include <limits>
#define max 100
using namespace std;

int minStepTD(int dp[], int n){
    //base case
    if(n == 1)
        return 0;
    //recursive case 
    //lookup if n is alredy computed
    if(dp[n] != 0)
        return dp[n];
    //if DP is not known
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;
    if(n%3 == 0)
        op1 = minStepTD(dp, n/3);
    if(n%2 == 0)
        op2 = minStepTD(dp, n/2);
    op3 = minStepTD(dp, n-1);

    int ans = min(min(op1, op2), op3) + 1;

    return dp[n] = ans;
}

int main(){
    
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int dp[max] = {0};
    
    cout << minStepTD(dp, n);

    return 0;
}