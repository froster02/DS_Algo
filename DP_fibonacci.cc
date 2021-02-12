#include <iostream>
#define maxm 100
using namespace std;

//* O(2^n)
//method 1 (recursion)  
int fib(int n){
    if(n == 0 || n == 1) return n;
    return fib(n - 1) + fib(n - 2);
}

//* O(n)
//method 2 (resursion + memorisation)   TOP DOWN
int fib(int n, int dp[]){
    int (n == 0 || n == 1)
        return n;
    if(dp[n] != 0)  
        return dp[n];
    
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

//method 3 (memorisation)   BOTTOM UP
int fib(int n){
    int dp[maxm] = {0};
    dp[1] = 1;

    for(int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}

int main(){

    int n, dp[maxm]; 
    cin >> n;

    cout << fib(n) << endl;
    //cout << fib(n, dp) << endl;
    //cout << fib(n) << endl;

    return 0;
}