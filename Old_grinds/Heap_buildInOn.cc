#include <iostream>
#include <vector>
using namespace std;

//true : min heap
//false : max heap

bool minHeap = false;

bool compare(int a, int b){
    if(minHeap)
        return a < b;
    else 
        return a > b;
}

void heapify(vector<int> &v, int i){
    int min_idx = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    int last = v.size();

    if(left <= last && compare(v[left], v[i]))
        min_idx = left;
    if(right <= last && compare(v[right], v[min_idx]))
        min_idx = right;
    if(min_idx != i){
        swap(v[i], v[min_idx]);
        heapify(v, min_idx);
    }
}

void buildHeapOptimized(vector<int> &v){
    int idx = v.size() / 2 - 1;
    for(int i = idx; i >= 0; i--){
        heapify(v, i);
    }
}

int main(){
    vector<int> v(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int e;
        cin >> e;
        v.push_back(e);
    }
    //10 20 5 6 1 8 9 4
    buildHeapOptimized(v);

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
        cout << (*it) << ", ";
    cout << "\n";
}