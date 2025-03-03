#include <iostream>
#include <cstdio>
#include <algorithm>
#define maxm 100
#define FAST ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;

int wine(int rate[], int i, int j, int y, int dp[][maxm]) {
    //base case
    if (i > j)
        return 0;
    
    //if dp[i][j] is already calculated
    if (dp[i][j] != 0)
        return dp[i][j];

    //recursive case
    int op1 = rate[i] * y + wine(rate, i + 1, j, y + 1, dp);
    int op2 = rate[j] * y + wine(rate, i, j - 1, y + 1, dp);

    int ans = max(op1, op2);
        
    return ans;
}

int main() {

    FAST;

    int bottle, rate[maxm], dp[maxm][maxm] = {0}, year;
    cout << "Enter number of bottles : ";
    cin >> bottle;
    cout << "\nEnter rates of each bottle : ";
    for (int i = 0; i < bottle; i++)
        cin >> rate[i];
    cout << "\nEnter at what rate of year price is changing : ";
    cin >> year;

    cout << "\nMaximum Profit : "<< wine(rate, 0, bottle - 1, year, dp) << endl;

    return 0;
}