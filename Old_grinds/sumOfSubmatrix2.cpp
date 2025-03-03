//sum of all submatrices of a given matrix (O^4)

#include<iostream>
#define max 1000
using namespace std;
int sumofsubmatrix(int p[max][max], int m, int n) {
    int sum = 0;
    for (int li = 0; li < m; li++) {
        for (int lj = 0; lj < n; lj++) {
            for (int bi = li; bi < m; bi++) {
                for (int bj = lj; bj < n; bj++) {
                    sum += p[bi][bj] - p[bi][lj - 1] - p[li - 1][bj] + p[li - 1][lj - 1];
                    //cout << "|" << sum;
                }
            }
        }
    }
    return sum;
}
int main() {
    int m, n;
    cin >> m >> n;
    int arr[max][max];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }

    //prefix sum array
    int p[max][max];
    p[0][0] = arr[0][0];
    for (int i = 1; i < m; i++)
        p[i][0] = p[i - 1][0] + arr[i][0];
    for (int j = 1; j < n; j++)
        p[0][j] = p[0][j - 1] + arr[0][j];    

    // cout << "**********************" << endl;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++)
    //         cout << p[i][j] << " ";
    //     cout << endl;
    // }

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++)
            p[i][j] = p[i][j - 1] + p[i - 1][j] - p[i - 1][j - 1] + arr[i][j];
    }

    cout << "**********************" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << p[i][j] << " ";
        cout << endl;
    }

    cout << "Total Sum" << sumofsubmatrix(p, m, n);
}