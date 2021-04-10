#include <iostream>
using namespace std;

int main() {

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, lis = 0;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int dp[n];

    for (int i = 0; i < n; i++) {
        dp[0] = 1;
        for (int j = 0; j < i; i++)
            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << dp[i] << " ";
        lis = max(lis, dp[i]);
    }

    cout << lis;

    return 0;
}