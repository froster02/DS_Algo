#include <iostream>
#include <vector>
using namespace std;

void heapify(vector<int> &v, int i, int size){
    int min_idx = i;
    int left = 2 * i + 1;
    int right = left + 1;

    int n = size;

    if(left < n && (v[left] > v[i]))
        min_idx = left;
    if(right < n && (v[right] > v[min_idx]))
        min_idx = right;
    if(min_idx != i){
        swap(v[i], v[min_idx]);
        heapify(v, min_idx, size);
    }
}

void buildHeapOptimized(vector<int> &v){
    int idx = v.size() / 2;
    for(int i = idx; i >= 0; i--){
        heapify(v, i, v.size());
    }
}

void heapSort(vector<int> &v){
    int n = v.size();

    //remove n - 1 elements from the heap
    while(n > 1){
        swap(v[1], v[n-1]);
        n--;
        heapify(v, 1, n);
    }
}

int main(){
    vector<int> v(0);
 //   v.push_back(-1);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int e;
        cin >> e;
        v.push_back(e);
    }
    //10 20 5 6 1 8 9 4
    buildHeapOptimized(v);

    heapSort(v);

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
        cout << (*it) << ", ";
    cout << "\n";
}