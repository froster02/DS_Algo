#include <iostream>
#define max 10000
using namespace std;
//CASE 1
int fib(int n, int dp[]){
	if(n==0 || n==1)
		return n;

	if(dp[n] != 0)
		return dp[n];
	
	int ans = fib(n-1, dp) + fib(n-2, dp);
		return dp[n] = ans;
}
//CASE 2
int fibBU(int n, int dp[]){
	dp[1] = 1;

	for(int i=2; i<=n; i++)
		dp[i] = dp[i-1] + dp[i-2];

	return dp[n];
}
//CASE 3
int fibSC(int n){
	if(n==0 || n==1)
		return n;

	int a = 0;
	int b = 1;
	int c;
	for(int i=2; i<=n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main(){

	int n;
	int dp[max] = {0};
	cin >> n;
	cout <<"Top Down : "<< fib(n, dp) << endl;
	cout <<"Button Up : "<< fibBU(n, dp) << endl;
	cout <<"Space Optimized, Buttom Up : "<< fibSC(n) << endl;
    return 0;
}