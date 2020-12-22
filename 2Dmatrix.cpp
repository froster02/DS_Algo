#include <iostream>
#include <cstdio>
#define max 100
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //simple 2-D matrix
    int n, m, a[max][max];
    cout << "No. of Rows : ";
    cin >> n;
    cout << "No. of Column : ";
    cin >> m;

    int value = 1;
    for (int r = 1; r <= n; r++) {
        for (int c = 1; c <= m; c++) {
            a[r][c] = value;
            value++;
            cout << a[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}