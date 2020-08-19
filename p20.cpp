#include <iostream>
using namespace std;
#define max 100
#define endl "\n"

void rotateImage(int a[][max], int n){
    `
    cout << "*******************";
    for(int j=n; j>=1; j--){
        for(int i=1; i<=n; i++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

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