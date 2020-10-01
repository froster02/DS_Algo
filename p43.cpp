/*
Given K painters to paint N boards where each painter takes 1 unit of time to paint 1 unit of boards i.e. if
the length of a particular board is 5, it will take 5 units of time to paint the board. Compute the minimum amount
of time to paint all the boards.

Note that:
Every painter can paint only contiguous segments of boards.
A board can only be painted by 1 painter at maximum.

Input Format
First line contains K which is the number of painters. Second line contains N which indicates the number of boards. Third line contains N space separated integers representing the length of each board.

Constraints
1 <= K <= 10
1 <= N <= 10
1<= Length of each Board <= 10^8

Output Format
Output the minimum time required to paint the board.

Sample Input
2
2
1 10

Sample Output
10
*/
#include <iostream>
#include <cstdio>
#define maxm 1000
#define endl '\n'
#define ll long long
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool isPossible(ll painter, ll board, ll length[], ll sum, ll mid){
    ll painterUsed = 1;
    ll boardPainted = 0;
    for(ll i=0; i<board; i++){
        if(boardPainted + length[i] > mid){
            painterUsed++;
            boardPainted = length[i];
            if(painterUsed > painter)
                return false;
        } else  
            boardPainted = boardPainted + length[i];
    }
    return true;
}

ll partitionFun(ll painter, ll board, ll length[], ll sum){
    ll ans = -1;
    //binary search
    ll l = length[board - 1];
    //cout <<"l"<< l << endl;
    ll h = sum;
    //cout <<"h"<< h << endl;
    while(l <= h){
        ll mid = (l + h) / 2;
        if(isPossible(painter, board, length, sum, mid)){
            ans = mid;
            h = mid - 1;
        } else 
            l = mid + 1;
    }
    return ans;
}

int main(){
    IO;

    ll painter, board, length[maxm], sum = 0;
    cin >> painter >> board;
    for(ll i = 0; i < board; i++){
        cin >> length[i];
        sum += length[i];
    }
    cout << partitionFun(painter, board, length, sum) << endl;
    return 0;
}