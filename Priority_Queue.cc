#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main(){

    // priority_queue<int> pq;  // !(max heap)
    priority_queue<int, vector<int>, greater<int> > pq;     // !(min heap)
    int n;
    cin >> n;

    for(int i = 1; i < n; i++){
        int no;
        cin >> no;
        pq.push(no);
    }

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}