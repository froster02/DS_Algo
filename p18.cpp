#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;

void spiralPattern(int a[][max], int m, int n){
    //spiral printing in 2D array
    int startRow = 1, startCol = 1, endRow = m, endCol = n;
    //condition for upto what the index will run
    while (startRow <= endRow && startCol <= endCol) {

        //traverse entire first row
        for (int i = startCol; i <= endCol; i++)
            cout << a[startRow][i] << "|";
        startRow++;

        //traverse entire last column
        for (int i = startRow; i <= endRow; i++)
            cout << a[i][endCol] << "|";
        endCol--;

        //traverse entire last row
        if (endRow > startRow) {
            for (int i = endCol; i >= startCol; i--)
                cout << a[endRow][i] << "|";
            endRow--;
        }

        //travere entire first column
        if (endCol > startCol) {
            for (int i = endRow; i >= startRow; i--)
                cout << a[i][startCol] << "|";
            startCol++;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, a[max][max];
    cout << "Enter Rows : ";
    cin >> m;
    cout << "Enter Column : ";
    cin >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }

    spiralPattern(a,m,n);

    return 0;
}