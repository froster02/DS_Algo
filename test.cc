#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(vector<int> arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void printSubsequences(vector<int> arr, int index, vector<int> subarr){

	if (index == arr.size()) {
		int l = subarr.size();
		if (l != 0)
			printArray(subarr, l);
	} else {
		printSubsequences(arr, index + 1, subarr);

		subarr.push_back(arr[index]);

		printSubsequences(arr, index + 1, subarr);
	}
	return;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    
    printSubsequences(a, 0, b);
    
    return 0;
}

