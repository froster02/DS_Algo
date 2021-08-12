#include <iostream>
using namespace std;

void knapsack(int n, vector<int> values, vector<int> weights, int cap){
    int r = n + 1;
    int c = cap + 1;

    int dp[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(j >= weights[i - 1]){
                int rCap = j - weights[i - 1];
                int temp = dp[i - 1][rCap] + values[i - 1];
                if(temp > dp[i - 1][j]){
                    dp[i][j] = temp;
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][cap] << endl;
}

int main(){

    int n, wgt, cap;

    vector<int> n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        values.push_back(elem);
    }

    vector<int> weights;
    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        weights.push_back(elem);
    }

    cin >> cap;

    knapsack(n, values, weights, cap);

    return 0;
}