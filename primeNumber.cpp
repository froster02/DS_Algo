#include <iostream>
using namespace std;

// O(N^2)
// bool isPrime(int n){
//     if(n == 1)
//         return false;
//     if(n == 2)
//         return true;
//     for(int i = 2; i < n; i++){
//         if(n % i == 0)
//             return false;
//     }
//     return true;
// }

// O(root N)
bool isPrime(int n){
    if(n == 1)
        return false;
    if(n == 2)
        return true;
    for(int i = 2; i * i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}

// O(Prime Sieve)



int main() {
    int n;
    cin >> n;
    if(isPrime(n))
        cout << "Prime";
    else 
        cout << "Non-Prime";
}