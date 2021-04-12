#include<iostream>
using namespace std;
 
int optimalGame(int n, int coins[])
{
    //matrix to store results
    int dp[n][n];
 
    //dp[i][j]=maximum amount you can definitely win if you move first with available coins[i...j]
 
    int i,j;
 
    //initialization
    //if we have only one coin and we have to move first, we will pick that coin
    for(j=0;j<n;j++)
       dp[j][j]=coins[j];
    
 
    //if we have only two coins and we have to move first, we will pick the coin of higher value
    for(j=0;j<n-1;j++)
        dp[j][j+1]=max(coins[j],coins[j+1]);
 
    //we will calculate results for a row of i coins 
    for(i=2;i<n;i++)
    {
        //we will calculate result dp[j][j+i]
        for(j=0;j+i<n;j++)
        {
            int x=coins[j]+min(dp[j+2][j+i],dp[j+1][j+i-1]);
            int y=coins[j+i]+min(dp[j+1][j+i-1],dp[j][j+i-2]);
 
            dp[j][j+i]=max(x,y);
        }
    }
 
    return dp[0][n-1];
}
 
int main()
{
    int i,n;
    cout<<"Enter the number of coins"<<endl;
    cin>>n;
 
    int coins[n];
 
    cout<<"Enter the values of coins"<<endl;
    for(i=0;i<n;i++)
        cin>>coins[i];
 
    cout<<"The maximum amount of money we can definitely win, if we move first is "<<endl;
    cout<<optimalGame(n,coins);
 
    cout<<endl;
    return 0;
}
