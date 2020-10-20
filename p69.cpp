//prime Factorisation (using optimised trail divisions)
#include <iostream>
#include <vector>
using namespace std;

void prime_factor(int n){
    vector < pair<int, int> > v;
    int cnt;
    for(int i = 2; i * i <= n; i++){
        //keep on dividing till it is divisible
        if(n % i == 0){
            cnt = 0;
            while(n % i == 0){
                cnt++;
                n = n / i;
            }
            v.push_back(make_pair(i, cnt));
        }
    }
    if(n != 1){
        //whatever is left is a prime number in itself
        v.push_back(make_pair(n, 1));
    }
    //print factors 
    for(auto p : v)
        cout << p.first << "^" << p.second << endl;
    
}

int main(){

    int n;
    cin >> n;
    prime_factor(n);

    return 0;
}