/* Few Programs based on DYNAMIC PROGRAMMING */

//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <limits>

#define IOS ios_base::sync_with_stdio(false);
#define CIN cin.tie(NULL);
#define endl "\n"
#define max 100

using namespace std;

//FUNCTION DEFINATIONS 
//case 1
int fibonacci_fun(int n, int dp[]) {

    if (n == 0 || n == 1)
        return n;

    if (dp[n] != 0)
        return dp[n];

    return dp[n] = fibonacci_fun((n - 1), dp) + fibonacci_fun((n - 2), dp);
}

//case 2
int mini_step_to_one(int n1, int dp1[]) {
    
    if (n1 == 1)
        return 0;

    if (dp1[n1] != 0)
        return dp1[n1];

    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;

    if (n1 % 3 == 0)
        op1 = mini_step_to_one(n1 / 3, dp1);

    if (n1 % 2 == 0)
        op2 = mini_step_to_one(n1 / 2, dp1);

    op3 = mini_step_to_one((n1 - 1), dp1);

    return dp1[n1] = min(min(op1, op2), op3) + 1;
}

//case 3 
int min_coin_change(int change, int typeCoin[], int type, int dp2[]) {

    if (change == 0)
        return 0;

    if (dp2[change] != 0)
        return dp2[change];

    int ans = INT_MAX;
    for (int i = 0; i < type; i++) {
        if (change - typeCoin[i] >= 0) {
            int sub = min_coin_change(change - typeCoin[i], typeCoin, type, dp2);
            ans = min(ans, sub + 1);
        }
    }
    return dp2[change] = ans;
}

//case 4
int wine_profit(int wine[], int i, int j, int y, int dp3[][max]) {

    if (i > j)
        return 0;

    if (dp3[i][j] != 0)
        return dp3[i][j];

    int op12 = wine[i] * y + wine_profit(wine, i + 1, j, y + 1, dp3);
    int op22 = wine[i] * y + wine_profit(wine, i, j - 1, y + 1, dp3);

    int ans;
    if (op12 > op22)
        ans = op12;
    else
        ans = op22;

    return dp3[i][j] = max;
}

//MAIN 
int main() {

    IOS;
    CIN;

    int ch = 0, num = 0;
    do {
        cout << "\n1. Fibonacci Recursion using DYNAMIC PROGRAMMING";
        cout << "\n2. Min Steps to One using DYNAMIC PROGRAMMING";
        cout << "\n3. Minimum coin change using DYNAMIC PROGRAMMING";
        cout << "\n4. Wine problem using DYNAMIC PROGRAMMING";
        cout << "\n\nEnter your choice : ";
        cin >> num;

        switch (num) {
            case 1: {
                int n, dp[max] = {0};
                cout << "Enter number to find Fibonacci of : ";
                cin >> n;
                cout << "ANSWER : " << fibonacci_fun(n, dp) << endl;
                break;
            }
            case 2: {
                int n1, dp1[max] = {0};
                cout << "Enter the source number : ";
                cin >> n1;
                cout << "ANSWER : " << mini_step_to_one(n1, dp1);
                break;
            }
            case 3: {
                int change, type, typeCoin[max], dp2[max] = {0};
                cin >> change >> type;
                for (int i = 0; i < type; i++)
                    cin >> typeCoin[i];
                cout << "ANSWER : " << min_coin_change(change, typeCoin, type, dp2);
                break;
            }
            case 4: {
                int n, y, wine[max], dp3[max][max];
                cin >> n;
                for (int i = 0; i < n; i++)
                    cin >> wine[i];
                int N = sizeof(wine) / sizeof(int);
                cin >> y;
                cout << "ANSWER : " << wine_profit(wine, 0, N - 1, y, dp3);
                break;
            }
            default:
                break;
        }
        cout << "\nDo you want to continue (1/0) : ";
        cin >> ch;
    } while (ch == 1);

    return 0;
}