#include <iostream>
using namespace std;

int maxSum(int a[], int n) {

    int dp[maxm] = {0};
    dp[0] = a[0] > 0 ? a[0] : 0;
    
    //KADANE'S ALGORITHM logic
    int ms = dp[0];

    for(int i = 1; i < n; i++){
        dp[i] = dp[i - 1] + a[i];
        if(dp[i] < 0)
            dp[i] = 0;
        ms = max(dp[i], ms);
    }
    return ms;
}

int main(){

    int n;
    cin >> n;
    int a[maxm] = {0};
    for(int i = 0; i < n; i++)
        cin >> a[i]

    cout << maxSum(a, n) << endl;

    return 0;
}