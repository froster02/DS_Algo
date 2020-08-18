#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //wave printing of a 2D array
    int n,a[max][max], m;
    cin >> n >> m;
    for(int i=0 ;i<n ;i++){
        for(int j=0; j<m; j++)
            cin >> a[i][j];
    }
    for(int c=0; c<n; c++){
        //if column is even go Top -> Bottom
        if(c%2==0){
            for(int r=0; r<m; r++)
                cout << a[r][c] << ",";
        }
        //if column is odd go Bottom -> Top
        if(c%2!=0){
            for(int r=m-1; r>=0; r--)   
                cout << a[r][c] << ",";
        }
    }

    return 0;
}