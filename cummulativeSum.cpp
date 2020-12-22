#include <iostream>
#include <cstdio>
#define max 100
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a[max], cumSum[max], currentSum=0, maxSum =0;
    cin >> n;
    cin >> a[0];
    cumSum[0] = a[0];
    for(int i=1; i<n; i++){
        cin >> a[i];
        cumSum[i] = cumSum[i-1] + a[i];
    }
    //cummulative sum
    for(int i=0;i<n;i++)
        cout << cumSum[i] << "|";

    return 0;
}