#include <iostream>
#include <cstdio>
#include <cstring>
#define max 100
#define endl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //list of string into 2D character array
    
    char a[max][max];
    int n;
    cin >> n;

    cin.get();
    for (int i = 0; i < n; i++)
        cin.getline(a[i], max);

    for (int i = 0; i < n; i++)
        cout << a[i] << endl;

    return 0;
}