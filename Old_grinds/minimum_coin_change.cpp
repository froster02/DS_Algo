#include <iostream>
#include <cstdio>
#include <limits>
#include <vector>
#define max 1000
using namespace std;

int minCoin(int change, int typeCoin[], int type, int dp[]) {
    //base case
    if (change == 0)
        return 0;

    //lookup
    if (dp[change] != 0)
        return dp[change];

    //recursive case 
    int ans = INT_MAX;
    for (int i = 0; i < type; i++) {
        if ((change - typeCoin[i]) >= 0) {
            int subPbl = minCoin((change - typeCoin[i]), typeCoin, type, dp);
            ans = min(ans, subPbl+1);
        }
    }
    return dp[change] = ans;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int change;
    cout << "Person 1 : for what amount you need change ? " << "\n";
    cout << "Person 2 : ";
    cin >> change;

    int type;
    cout << "\nPerson 2 : how many types of change coins do you have ? " << "\n";
    cout << "Person 1 : ";
    cin >> type;

    int typeCoin[max];
    cout << "\nPerson 1 : which-which coin do you have ? " << "\n";
    cout << "Person 2 : ";
    for (int i = 0; i < type; i++)
        cin >> typeCoin[i];

    int dp[max] = {0};

    cout << "\nhere you go... " << minCoin(change, typeCoin, type, dp) << " coin" << "\n";

    return 0;
}