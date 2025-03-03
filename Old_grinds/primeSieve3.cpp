//Prime Visits - Prime Sieve Problem
#include <iostream>
#define maxm 1000005
#define ll long long
using namespace std;

void prime_sieve(int * p) {

    //special case
    p[0] = p[1] = 0;
    p[2] = 1;

    //first mark all odd number's prime
    for (int i = 3; i <= maxi; i += 2)
        p[i] = 1;

    //sieve
    for (ll i = 3; i <= maxi; i = i + 2) {
        if (p[i] == 1) {
            for (ll j = i * i; j <= maxi; j = j + i)
                p[j] = 0;
        }
    }
}

int main() {

    int n;
    cin >> n;
    int p[maxi] = {0};
    prime_sieve(p);
    int csum[maxi] = {0};

    //precompute the primes upto an index i
    for(int i=1; i <= maxi; i++)
        csum[i] = csum[i-1] + p[i];
    
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        cout << csum[b] - csum[a - 1] << endl;
    }

    return 0;
}