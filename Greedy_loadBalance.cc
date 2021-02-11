//https://www.spoj.com/problems/BALIFE/
#include <iostream>
using namespace std;

int main(){

    int a[1000];
    int n, i, val, diff;

    while(1){
        int max_load = 0, load = 0;
        cin >> n;

        if(n == -1)
            break;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            load = load + a[i];
        }
        if(load % n != 0){
            cout << "-1" << endl;
            continue;
        }
        //find the load that is to be divided equally
        load = load / n;

        //greedy step
        int diff = 0;
        for(int i = 0; i < n; i++){
            diff = diff + (a[i] - load);
            max_load = max(max_load, abs(diff));
        }
        cout << max_load;
    }
    return 0;
}