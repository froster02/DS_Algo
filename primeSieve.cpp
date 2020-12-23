#include <iostream>
#include <vector>
#define maxm 100000
using namespace std;

vector<int > prime_sieve(int *p, int n) {

    //special case 
    p[0] = 0;
    p[1] = 0;
    p[2] = 1;

    // let mark all odd numbers as prime as they are potential primes
    for(int i = 3; i <= n; i += 2)
        p[i] = 0;

    //mark the square of numbers as not prime
    for(int i = 3; i <= n; i+= 2){
        if(p[i]){
            for(int j = i * i; j <= maxm; j=j+i)
                p[j] = 0;
        }
    }

    vector<int > primes;
    primes.push_back(2);

    for(int i = 3; i<= n; i+=2){
        if(p[i]){
            primes.push_back(i);
        }
    }

    return primes;
}

vector<int > factorize(int m, vector<int> &primes) {
    vector<int > factors;
    factors.clear();

    int i = 0;
    int p = primes[0];

    while(p * p <= m){
        if(m % 2 == 0){
            factors.push_back(p);
            while(m % p == 0){
                m = m / p;
            }
        }
        //go to the next postion
        i++;
        p = primes[i];
    }
    if(m != 1)
        factors.push_back(m);
    return factors;
}

int main(){
    int p[maxm] = {0};
    vector<int > primes = prime_sieve(p, 100);

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int > v = factorize(n, primes);

        for(auto i : v)
            cout << i << " " << endl;
    }
}