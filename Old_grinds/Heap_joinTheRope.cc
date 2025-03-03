#include <iostream>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

int join_rope(int rope[], int n){
    priority_queue<int, vector<int>, greater<int> > pq(rope, rope + n);
    int cost = 0;
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();

        int b = pq.top();
        pq.pop();

        int new_rope = a + b;
        cost = cost + new_rope;
        pq.push(new_rope);
    }
    return cost;
}

int main(){

    int n, v[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    cout << join_rope(v, n);

    return 0;
}