//*https://www.spoj.com/problems/BAISED/
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a[100] = {0};
    int t;
    cin >> t;
    while (t--) {
        memset(a, 0, sizeof(a));
        string name;
        int n, r;
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> name >> r;
            a[r]++;
        }

        //greedy approach = assign the team nearest rank available
        int actural_rank = 1, sum = 0;
        for(int i = 1; i <= n; i++){
            while(a[i]){
                sum = sum + abs(actural_rank - i);
                a[i]--;
                actural_rank++;
            }
        }
        cout << sum << endl;
    }
}