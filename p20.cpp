#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
#define max 100
#define endl "\n"

//Method 1
void rotateImage(int a[][max], int n) {

    cout << "*******************" << endl;
    for (int j = n; j >= 1; j--) {
        for (int i = 1; i <= n; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

// //Method 2
// void rotateImage(int a[][max], int n) {
//     cout << "******************" << endl;
//     for (int j = n; j >= 1; j--) {
//         for (int i = 1; i <= n; i++) {
//             swap(a[i][j], a[j][i]);
//         }
//         cout << endl;
//     }
// }

// //Method 3
// void rotateImage(int a[][max], int n) {
//     cout << "*********************" << endl;
//     for (int i = 0; i < n; i++)
//         reverse(a[i], a[i] + n);
//     for (int j = n; j >= 1; j--) {
//         for (int i = 1; i <= n; i++) {
//             swap(a[i][j], a[j][i]);
//         }
//         cout << endl;
//     }

// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max][max];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    rotateImage(a, n);

    return 0;
}