#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> t;

    int r = n + 1;
    int c = t + 1;
    int dp[r][c] = {0};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // idx = (0,0);
            if(i == 0 and j == 0) 
                dp[i][j] = true;
            // idx = row;
            else if(i == 0)
                dp[i][j] = false;
            // idx = column;
            else if(j == 0)
                dp[i][j] = true;
            else {
                // check upward if previous elements fullfil the subset requirement
                if(dp[i - 1][j] == true)
                    dp[i][j] = true;
                else {
                    int val = a[i - 1];
                    if(j >= val) {
                        if(dp[i - 1][j - val] == true) {
                            dp[i][j] = true;
                        }
                    }
                }
            }   
        }
    }

    cout << dp[n][t] << endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << dp[i][j] << ",";
        }
        cout << endl;
    }

    return 0;
}