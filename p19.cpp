#include <iostream>
#include <cstdio>
#define max 100
#define endl "\n"
using namespace std;
//************************************************************   ERROR      *********************************************
//************************************************************   ERROR      *********************************************
//************************************************************   ERROR      *********************************************
//************************************************************   ERROR      *********************************************
//************************************************************   ERROR      *********************************************
void magicalPark(int a[][max], int n, int m, int s, int k) {
    bool success = true;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            char ch = a[i][j];
            if (s < k) {
                success = false;
                break;
            }
			if (ch == '*')
                s += 5;
            else if (ch == '.')
                s -= 2;
            else{
                break;
			}

			if(j != n-1)
            	s--;
        }
    }
    if (success) {
        cout << "YES" << endl;
        cout << s << endl;
    }
    else 
        cout << "NO" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, a[max][max], s, k;
    cin >> n >> m >> k >> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    magicalPark(a, n, m, s, k);

    return 0;
}