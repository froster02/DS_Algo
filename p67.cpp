#include <iostream>
#define maxm 1000005
#define ll long long
using namespace std;

void prime_sieve(int * p) {

    //special case
    p[0] = p[1] = 0;
    p[2] = 1;

    //first mark all odd number's prime
    for (int i = 3; i <= maxm; i += 2)
        p[i] = 1;

    //sieve
    for (ll i = 3; i <= maxm; i = i + 2) {
        if (p[i] == 1) {
            for (ll j = i * i; j <= maxm; j = j + i)
                p[j] = 0;
        }
    }

}

int main() {

    int n;
    cin >> n;
    int p[maxm] = {0};
    prime_sieve(p);
    for (int i = 0; i <= n; i++)
        if (p[i] == 1)
            cout << i << " ";

    return 0;
}