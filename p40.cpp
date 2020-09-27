/* book allocation problem */ 
#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int a[], int n, int m, int curr_min) {
    int studentUsed = 1;
    int pages_reading = 0;
    for (int i = 0; i < n; i++) {
        if (pages_reading + a[i] > curr_min) {
            studentUsed++;
            pages_reading = a[i];
            if (studentUsed > m)
                return false;
        } else {
            pages_reading = pages_reading + a[i];
        }
    }
    return true;
} 

int find_pages(int a[], int n, int m) {
    int sum = 0;
    if (n < m)
        return -1;
    for (int i = 0; i < n; i++)
        sum += a[i];
    int s = a[n - 1], ans = INT_MAX, e = sum;
    while (s <= e) {
        int mid = (s + e) / 2;
        if (isPossible(a, n, m, mid)) {
            ans = min(ans, mid);
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main() {

    int t;
    cin >> t;
    //FOR LOOP works faster than WHILE LOOP 
    for(int i=0; i<t; i++) {
        int m , n, a[1000];
        cin >> n >> m;
        for (int j = 0; j < n; j++)
            cin >> a[j];
        cout << find_pages(a, n, m) << endl;
    }

    return 0;
}