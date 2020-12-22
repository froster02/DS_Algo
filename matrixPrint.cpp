#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //wave printing of a 2D array
    int n, a[max][max] = {0}, m;
    cout << "Enter Rows : ";
    cin >> m;
    cout << "Enter Column : ";
    cin >> n;
    for (int r = 0; r < m; r++) {
        for (int c = 0; c < n; c++)
            cin >> a[r][c];
    }

    for (int c = 0; c < n; c++) {
        //if column is even go Top -> Bottom
        if (c % 2 == 0) {
            for (int r = 0; r < m; r++)
                cout << a[r][c] << ",";
        }
        //if column is odd go Bottom -> Top
        else {
            for (int r = m - 1; r >= 0; r--)
                cout << a[r][c] << ",";
        }
    }
    return 0;
}