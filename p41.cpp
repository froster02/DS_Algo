#include <iostream>
#include <cstdio>
#include <climits>
#include <algorithm>
#define maximum 1000
using namespace std;

//if the timing is correct
bool isPossible(int a[], int pratha, int cooks, int mid) {
    //count parathas made by ith cook in mid time
    int count = 0;
    for (int i = 0; i < cooks; i++) {
        int time = 0;
        int j = 1;
        while (true) {
            time = time + (j * a[i]);
            j++;
            if (time > mid)
                break;
            count++;
        }
    }
    return (count >= pratha);
}

//maximum time taken by lowest ranked cook
int max_cooking_time(int pratha, int slow_cook) {
    int i = 1, count = 0, max_time = 0;
    while (count < pratha) {
        max_time = max_time + (i * slow_cook);
        i++;
        count++;
    }
    return max_time;
}

//calculate best time taken by cooks
void cookPratha(int a[], int pratha, int cooks, int slow_cook) {
    int ans = INT_MAX, s = 0, e = max_cooking_time(pratha, slow_cook);
    while (s <= e) {
        int mid = (s + e) / 2;
        if (isPossible(a, pratha, cooks, mid)) {
            ans = min(ans, mid);
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //input test case
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int p, c, a[maximum], slow_cook = 0;
        cin >> p >> c;
        //input ranks wise cooks
        for (int j = 0; j < c; j++) {
            cin >> a[i];
            slow_cook = max(slow_cook, a[i]);
        }
        cookPratha(a, p, c, slow_cook);
    }
    return 0;
}