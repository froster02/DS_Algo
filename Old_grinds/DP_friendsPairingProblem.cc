#include <iostream>
using namespace std;

int FPP(int n){
    int dp[n + 1];

    //buttom up
    for (int i = 0; i <= n; i++){
        if(i <= 2)
            dp[i] = i;
        else 
            dp[i] = dp[i - 1] + ((i - 1) * dp[i - 2]);
    }
    return dp[n];
}

int main(){

    int n;
    cin >> n;
    cout << FPP(n);
}