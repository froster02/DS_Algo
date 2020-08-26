//******************************************************||         ERROR        ||************************************************

//sum of all submatrices of a given matrix (O^6)
#include <iostream>s
#include <cstdio>
#define max 100
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a[max][max];
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int li = 0; li < n; li++) {
        for (int lj = 0; lj < n; lj++) {
            for (int bi = li + 1; bi < n; bi++) {
                for (int bj = lj + 1; bj < n; bj++) {
                    for (int i = li; i <= bi; i++) {
                        for (int j = lj; j <= bj; j++) {
                            sum = sum + a[i][j];
                        }
                    }
                }
            }
        }
    }

    cout << "Sum : " << sum << endl;

    return 0;
}