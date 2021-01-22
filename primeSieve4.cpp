*********************************************************ERROR*********************************************************

#include <iostream>
#include <vector>
#include <cstdio>

#define IO ios_base(false); sync_with_stdio(NULL);
#define maxm 100

using namespace std;

//prime Sieve
vector<int > prime_sieve(int * p, int n) {
    //special case
    p[0] = p[1] = 0;
    p[2] = 1;

    //mark odd numbers as prime as they could be potential prime
    for (int i = 3; i <= maxi; i = i + 2)
        p[i] = 1;

    //mark square of possible prime numbers as not prime 
    for (int i = 3; i <= maxi; i = i + 2) {
        if (p[i]) {
            for (int j = 3; j <= maxi; j = j + i)
                p[j] = 0;
        }
    }

    vector<int > prime;
    prime.push_back(2);

    for(int i = 3; i <= n; i = i + 2){
        if(p[i])
            prime.push_back(i);
    }
    return prime;
}

vector<int > factorize(int m, vector<int > &prime){
    vector<int > factors;
    factors.clear();
    int ans = 1, i = 0;
    int p = prime[0];

    while((p * p) <= m){
        if(m % p == 0){
            int count = 0;
            while((m % p) == 0){
                count++;
                m = m / p;
            }
            ans = ans + (count + 1);
        }
        i++;
        p = prime[i];
    }
    if(m!=1)
        ans = ans * 2;
    return ans;
}

int main() {

    int p[maxi] = {0};
    vector <int > prime = prime_sieve(p, 100);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int > factor = factorize(n, prime);
        for(auto f : factor)
            cout << f << " " << endl;
    }

    return 0;
}