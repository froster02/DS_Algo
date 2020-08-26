//******************************************************||         ERROR        ||************************************************

//sum of all submatrices of a given matrix (O^6)
#include <iostream>
#include <cstdio>
#define max 100
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max][max], sum = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int li=0; li < n-1; li++){
        for(int lj=0; lj < n-1; lj++){
            for(int bi = li; bi < n-1; bi++){
                for(int bj = lj; bj < n-1; bj++){
                    for(int i = li; i < bi; i++){
                        for(int j = lj; j < bj; j++){
                            sum += a[i][j];
                        }
                    }
                }
            }
        }
    }

    

    cout << "Sum : " << sum << endl;

    return 0;
}