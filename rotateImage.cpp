#include <iostream>
#include <algorithm>
#define max 1000
using namespace std;

//METHOD 1
void rotate(int a[][max], int n){

    for(int row=0; row<n; row++){
        int start_colm = 0;
        int end_colm   = n-1;
        while(start_colm < end_colm){
            swap(a[row][start_colm], a[row][end_colm]);
            start_colm++;
            end_colm--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(i<j)
                swap(a[i][j], a[j][i]);
    }
}

//METHOD 2
void algoRotate(int a[][max], int n){

    for(int i=0; i<n; i++)
        reverse(a[i], a[i]+n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(i<j)
                swap(a[i][j], a[j][i]);
    }
}


int main(){
    int n, a[max][max];
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin >> a[i][j];
    }

    // rotate(a, n);
    // //OUTPUT
    // cout << endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }

    // cout << endl;

    algoRotate(a, n);
    //OUTPUT
    cout << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}