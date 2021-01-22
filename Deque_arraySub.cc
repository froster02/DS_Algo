//  https://www.spoj.com/problems/ARRAYSUB/

#include <iostream>
#include <deque>
#define maxm 100000
using namespace std;
int main(){
    int n;
    int a[maxi];
    int k;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    //process first k elements separately
    deque<int> q(k);
    int i;
    for(i = 0; i < k; i++){
        while(!q.empty() && a[i] > a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }

    //process remaining array
    for(    ; i < n; i++){
        cout << a[q.front()] << " ";

        //1. remove elements which are not part of window(contraction)
        while((!q.empty()) && q.front() <= i - k){
            q.pop_front();
        }

        //2. Remove elements which are not useful and are in window
        while(!q.empty() && a[i] >= a[q.back()]){
            q.pop_back();
        }

        //3. Add the new elements (expansion)
        q.push_back(i);
    }

    cout << a[q.front()] << endl;

    return 0;
}